// shift out pins
const int latchPinOut = 8;
const int clockPinOut = 12;
const int dataPinOut = 11;

// shift in pins
int ploadPinIn        = 7;  // Connects to Parallel load pin the 165
int clockEnablePinIn  = 9;  // Connects to Clock Enable pin the 165
int dataPinIn         = 5; // Connects to the Q7 pin the 165
int clockPinIn       = 6; // Connects to the Clock pin the 165

/* How many shift register chips are daisy-chained.
*/
#define NUMBER_OF_SHIFT_CHIPS   1

/* Width of data (how many ext lines).
*/
#define DATA_WIDTH   NUMBER_OF_SHIFT_CHIPS * 8

/* Width of pulse to trigger the shift register to read and latch.
*/
#define PULSE_WIDTH_USEC   5

/* Optional delay between shift register reads.
*/
#define POLL_DELAY_MSEC   1

/* You will need to change the "int" to "long" If the
 * NUMBER_OF_SHIFT_CHIPS is higher than 2.
*/
#define BYTES_VAL_T unsigned int
BYTES_VAL_T pinValues;

byte inBytes[8];
byte prevInBytes[8];
byte stableCycles[8];

void setup() {
  // put your setup code here, to run once:
  pinMode(latchPinOut, OUTPUT);
  pinMode(dataPinOut, OUTPUT);
  pinMode(clockPinOut, OUTPUT);

  pinMode(ploadPinIn, OUTPUT);
  pinMode(clockEnablePinIn, OUTPUT);
  pinMode(clockPinIn, OUTPUT);
  pinMode(dataPinIn, INPUT);
  
  Serial.begin(9600);
  Serial.println("starting shift in out");
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<8; i++) {
    // for each bit in an 8-bit number...
    
    // send i-th number of each channel

    // calculate byte value
    byte b = B00000000;
    for(int j=0; j<8; j++) {
      // for each channel number
      bitWrite(b, j, bitRead(j+1, i));
    }

    // shift out byte b
    digitalWrite(latchPinOut, LOW);
    shiftOut(dataPinOut, clockPinOut, MSBFIRST, b);
    digitalWrite(latchPinOut, HIGH);
    delay(1);

    // shift in read from shift out
    byte testByte = read_shift_regs();
    for(int j=0; j<8; j++) {
      // for each channel number
      bitWrite(inBytes[j], i, bitRead(testByte, j));
      if(i==7) {
        if(prevInBytes[j] != inBytes[j]) {
          stableCycles[j] = 0;
        } else if(stableCycles[j]<3) {
          stableCycles[j] ++;
        }
        if(stableCycles[j]==2) {
          if(inBytes[j]) {
            // connection
            Serial.print(inBytes[j]-1);
            Serial.print("->");
            Serial.println(j);
          } else {
            Serial.println("disconnection");
          }
        }
        prevInBytes[j] = inBytes[j];
      }
    }
    delay(1);
  }
  delay(1);
}

BYTES_VAL_T read_shift_regs()
{
    long bitVal;
    BYTES_VAL_T bytesVal = 0;

    /* Trigger a parallel Load to latch the state of the data lines,
    */
    digitalWrite(clockEnablePinIn, HIGH);
    digitalWrite(ploadPinIn, LOW);
    delayMicroseconds(PULSE_WIDTH_USEC);
    digitalWrite(ploadPinIn, HIGH);
    digitalWrite(clockEnablePinIn, LOW);

    /* Loop to read each bit value from the serial out line
     * of the SN74HC165N.
    */
    for(int i = 0; i < DATA_WIDTH; i++)
    {
        bitVal = digitalRead(dataPinIn);

        /* Set the corresponding bit in bytesVal.
        */
        bytesVal |= (bitVal << ((DATA_WIDTH-1) - i));

        /* Pulse the Clock (rising edge shifts the next bit).
        */
        digitalWrite(clockPinIn, HIGH);
        delayMicroseconds(PULSE_WIDTH_USEC);
        digitalWrite(clockPinIn, LOW);
    }

    return(bytesVal);
}
