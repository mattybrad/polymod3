#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

AudioControlSGTL5000     sgtl5000_1;

#include "ModuleSine.h"
#include "ModuleMain.h"
#include "SocketConnection.h"

const byte OUT_LATCH_PIN = 17;
const byte OUT_CLOCK_PIN = 16;
const byte OUT_DATA_PIN = 22;
const byte IN_LOAD_PIN = 8;
const byte IN_CLOCK_ENABLE_PIN = 9;
const byte IN_CLOCK_PIN = 10;
const byte IN_DATA_PIN = 11;
const byte MUX_ADDRESS_PINS[3] = {12,13,14};
const byte MUX_DATA_PIN = 15;
const byte NUM_SHIFT_REGISTERS = 2; // number of each type of shift register

ModuleSine moduleSine;
ModuleMain moduleMain;
SocketConnection con1;

void setup() {
  AudioMemory(50);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.3);
  con1.connect(moduleSine.audioOut, moduleMain.audioIn);
  
  pinMode(OUT_LATCH_PIN, OUTPUT);
  pinMode(OUT_CLOCK_PIN, OUTPUT);
  pinMode(OUT_DATA_PIN, OUTPUT);
  pinMode(IN_LOAD_PIN, OUTPUT);
  pinMode(IN_CLOCK_ENABLE_PIN, OUTPUT);
  pinMode(IN_CLOCK_PIN, OUTPUT);
  pinMode(IN_DATA_PIN, INPUT);
  for(byte i=0; i<3; i++) {
    pinMode(MUX_ADDRESS_PINS[i], OUTPUT);
  }

  Serial.begin(9600);
}

const byte numChannels = 8 * NUM_SHIFT_REGISTERS;
byte inputReadings[numChannels];
void loop() {
  byte b,m,c,n;
  for(n=0; n<numChannels; n++) {
    inputReadings[n] = B00000000;
  }
  
  for(b=0; b<8; b++) {
    // for each bit (sent/received serially)
    //Serial.print(b);
    //Serial.print(" ");

    digitalWrite(OUT_LATCH_PIN, LOW);
    for(m=0; m<NUM_SHIFT_REGISTERS; m++) {
      // for each output multiplexer in the daisy chain
      byte multiplexerNum = NUM_SHIFT_REGISTERS - m - 1; // last multiplexer is first
      byte byteToSend = B00000000;
      for(c=0; c<8; c++) {
        bool bitVal = bitRead(8*multiplexerNum + c + 1, b);
        bitWrite(byteToSend, c, bitVal);
      }
      //Serial.print(byteToSend, BIN);
      //Serial.print(" ");
      shiftOut(OUT_DATA_PIN, OUT_CLOCK_PIN, MSBFIRST, byteToSend);
    }
    digitalWrite(OUT_LATCH_PIN, HIGH);
    //Serial.print("\n");


    delayMicroseconds(5); // maybe not needed
    
    digitalWrite(IN_CLOCK_ENABLE_PIN, HIGH);
    digitalWrite(IN_LOAD_PIN, LOW);
    delayMicroseconds(5);
    digitalWrite(IN_LOAD_PIN, HIGH);
    delayMicroseconds(5);
    digitalWrite(IN_CLOCK_ENABLE_PIN, LOW);

    for(m=0; m<NUM_SHIFT_REGISTERS; m++) {
      for(c=0; c<8; c++) {
        bool bitVal = digitalRead(IN_DATA_PIN);
        byte inputReadingNum = 8*m + c;
        bitWrite(inputReadings[inputReadingNum], b, bitVal);
        digitalWrite(IN_CLOCK_PIN, HIGH);
        delayMicroseconds(5);
        digitalWrite(IN_CLOCK_PIN, LOW);
      }
    }
  }
  for(n=0; n<numChannels; n++) {
    inputReadings[n] -= 1;
    if(inputReadings[n]==255) {
      //Serial.print(n);
      //Serial.print(" not connected");
    } else {
      Serial.print(inputReadings[n]);
      Serial.print(" connected to ");
      Serial.print(n);
      Serial.print("\n");
    }
  }
  delay(500);
}
