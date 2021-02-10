EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 2
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L 74xx:74HC165 U4
U 1 1 60219E11
P 6150 2200
F 0 "U4" H 6550 3300 50  0000 C CNN
F 1 "74HC165" H 6550 3200 50  0000 C CNN
F 2 "Package_DIP:DIP-16_W7.62mm_Socket" H 6150 2200 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/74HC_HCT165.pdf" H 6150 2200 50  0001 C CNN
	1    6150 2200
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC595 U3
U 1 1 6021B643
P 2150 2100
F 0 "U3" H 2450 2850 50  0000 C CNN
F 1 "74HC595" H 2450 2750 50  0000 C CNN
F 2 "Package_DIP:DIP-16_W7.62mm_Socket" H 2150 2100 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/sn74hc595.pdf" H 2150 2100 50  0001 C CNN
	1    2150 2100
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x08_Female J2
U 1 1 6021C6A8
P 3050 2000
F 0 "J2" H 3078 1976 50  0000 L CNN
F 1 "Conn_01x08_Female" H 3078 1885 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x08_P2.54mm_Vertical" H 3050 2000 50  0001 C CNN
F 3 "~" H 3050 2000 50  0001 C CNN
	1    3050 2000
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x08_Female J3
U 1 1 6021CE72
P 5200 2050
F 0 "J3" H 5000 2550 50  0000 L CNN
F 1 "Conn_01x08_Female" H 4700 2650 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x08_P2.54mm_Vertical" H 5200 2050 50  0001 C CNN
F 3 "~" H 5200 2050 50  0001 C CNN
	1    5200 2050
	1    0    0    -1  
$EndComp
Text Notes 1300 950  0    50   ~ 0
Output ports
Text Notes 4950 950  0    50   ~ 0
Input ports
Text GLabel 1750 1900 0    50   Input ~ 0
OUT_CLOCK
Text GLabel 1750 2200 0    50   Input ~ 0
OUT_LATCH
Text HLabel 1750 1700 0    50   Input ~ 0
OUT_DATA_IN
$Comp
L Device:R R1
U 1 1 6022C030
P 2700 1700
F 0 "R1" V 2650 1850 50  0000 C CNN
F 1 "10k" V 2700 1700 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 2630 1700 50  0001 C CNN
F 3 "~" H 2700 1700 50  0001 C CNN
	1    2700 1700
	0    1    1    0   
$EndComp
$Comp
L Device:R R2
U 1 1 6022D1C4
P 2700 1800
F 0 "R2" V 2650 1950 50  0000 C CNN
F 1 "10k" V 2700 1800 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 2630 1800 50  0001 C CNN
F 3 "~" H 2700 1800 50  0001 C CNN
	1    2700 1800
	0    1    1    0   
$EndComp
$Comp
L Device:R R3
U 1 1 6022D44C
P 2700 1900
F 0 "R3" V 2650 2050 50  0000 C CNN
F 1 "10k" V 2700 1900 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 2630 1900 50  0001 C CNN
F 3 "~" H 2700 1900 50  0001 C CNN
	1    2700 1900
	0    1    1    0   
$EndComp
$Comp
L Device:R R4
U 1 1 6022D690
P 2700 2000
F 0 "R4" V 2650 2150 50  0000 C CNN
F 1 "10k" V 2700 2000 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 2630 2000 50  0001 C CNN
F 3 "~" H 2700 2000 50  0001 C CNN
	1    2700 2000
	0    1    1    0   
$EndComp
$Comp
L Device:R R5
U 1 1 6022D93B
P 2700 2100
F 0 "R5" V 2650 2250 50  0000 C CNN
F 1 "10k" V 2700 2100 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 2630 2100 50  0001 C CNN
F 3 "~" H 2700 2100 50  0001 C CNN
	1    2700 2100
	0    1    1    0   
$EndComp
$Comp
L Device:R R6
U 1 1 6022DBEC
P 2700 2200
F 0 "R6" V 2650 2350 50  0000 C CNN
F 1 "10k" V 2700 2200 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 2630 2200 50  0001 C CNN
F 3 "~" H 2700 2200 50  0001 C CNN
	1    2700 2200
	0    1    1    0   
$EndComp
$Comp
L Device:R R7
U 1 1 6022DE0A
P 2700 2300
F 0 "R7" V 2650 2450 50  0000 C CNN
F 1 "10k" V 2700 2300 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 2630 2300 50  0001 C CNN
F 3 "~" H 2700 2300 50  0001 C CNN
	1    2700 2300
	0    1    1    0   
$EndComp
$Comp
L Device:R R8
U 1 1 6022DFB6
P 2700 2400
F 0 "R8" V 2650 2550 50  0000 C CNN
F 1 "10k" V 2700 2400 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 2630 2400 50  0001 C CNN
F 3 "~" H 2700 2400 50  0001 C CNN
	1    2700 2400
	0    1    1    0   
$EndComp
Text HLabel 2550 2600 2    50   Output ~ 0
OUT_DATA_OUT
$Comp
L power:GND #PWR0105
U 1 1 60231A72
P 2150 2800
F 0 "#PWR0105" H 2150 2550 50  0001 C CNN
F 1 "GND" H 2155 2627 50  0000 C CNN
F 2 "" H 2150 2800 50  0001 C CNN
F 3 "" H 2150 2800 50  0001 C CNN
	1    2150 2800
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0106
U 1 1 6023211D
P 2150 1500
F 0 "#PWR0106" H 2150 1350 50  0001 C CNN
F 1 "VCC" H 2165 1673 50  0000 C CNN
F 2 "" H 2150 1500 50  0001 C CNN
F 3 "" H 2150 1500 50  0001 C CNN
	1    2150 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5650 1700 5000 1700
Wire Wire Line
	5000 1700 5000 1750
Wire Wire Line
	5000 1850 5000 1800
Wire Wire Line
	5000 1800 5650 1800
Wire Wire Line
	5650 1900 5000 1900
Wire Wire Line
	5000 1900 5000 1950
Wire Wire Line
	5650 2000 5000 2000
Wire Wire Line
	5000 2000 5000 2050
Wire Wire Line
	5650 2100 5000 2100
Wire Wire Line
	5000 2100 5000 2150
Wire Wire Line
	5000 2250 5000 2200
Wire Wire Line
	5000 2200 5650 2200
Wire Wire Line
	5650 2300 5000 2300
Wire Wire Line
	5000 2300 5000 2350
Wire Wire Line
	5000 2450 5000 2400
Wire Wire Line
	5000 2400 5650 2400
$Comp
L Device:R R9
U 1 1 60237FA4
P 4850 1750
F 0 "R9" V 4800 1600 50  0000 C CNN
F 1 "47k" V 4850 1750 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 4780 1750 50  0001 C CNN
F 3 "~" H 4850 1750 50  0001 C CNN
	1    4850 1750
	0    1    1    0   
$EndComp
Connection ~ 5000 1750
$Comp
L Device:R R10
U 1 1 60238EC9
P 4850 1850
F 0 "R10" V 4800 1700 50  0000 C CNN
F 1 "47k" V 4850 1850 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 4780 1850 50  0001 C CNN
F 3 "~" H 4850 1850 50  0001 C CNN
	1    4850 1850
	0    1    1    0   
$EndComp
Connection ~ 5000 1850
$Comp
L Device:R R11
U 1 1 602390C7
P 4850 1950
F 0 "R11" V 4800 1800 50  0000 C CNN
F 1 "47k" V 4850 1950 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 4780 1950 50  0001 C CNN
F 3 "~" H 4850 1950 50  0001 C CNN
	1    4850 1950
	0    1    1    0   
$EndComp
Connection ~ 5000 1950
$Comp
L Device:R R12
U 1 1 60239328
P 4850 2050
F 0 "R12" V 4800 1900 50  0000 C CNN
F 1 "47k" V 4850 2050 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 4780 2050 50  0001 C CNN
F 3 "~" H 4850 2050 50  0001 C CNN
	1    4850 2050
	0    1    1    0   
$EndComp
Connection ~ 5000 2050
$Comp
L Device:R R13
U 1 1 60239540
P 4850 2150
F 0 "R13" V 4800 2000 50  0000 C CNN
F 1 "47k" V 4850 2150 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 4780 2150 50  0001 C CNN
F 3 "~" H 4850 2150 50  0001 C CNN
	1    4850 2150
	0    1    1    0   
$EndComp
Connection ~ 5000 2150
$Comp
L Device:R R14
U 1 1 60239754
P 4850 2250
F 0 "R14" V 4800 2100 50  0000 C CNN
F 1 "47k" V 4850 2250 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 4780 2250 50  0001 C CNN
F 3 "~" H 4850 2250 50  0001 C CNN
	1    4850 2250
	0    1    1    0   
$EndComp
Connection ~ 5000 2250
$Comp
L Device:R R15
U 1 1 60239905
P 4850 2350
F 0 "R15" V 4800 2200 50  0000 C CNN
F 1 "47k" V 4850 2350 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 4780 2350 50  0001 C CNN
F 3 "~" H 4850 2350 50  0001 C CNN
	1    4850 2350
	0    1    1    0   
$EndComp
Connection ~ 5000 2350
$Comp
L Device:R R16
U 1 1 60239A7C
P 4850 2450
F 0 "R16" V 4800 2300 50  0000 C CNN
F 1 "47k" V 4850 2450 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 4780 2450 50  0001 C CNN
F 3 "~" H 4850 2450 50  0001 C CNN
	1    4850 2450
	0    1    1    0   
$EndComp
Connection ~ 5000 2450
$Comp
L power:GND #PWR0108
U 1 1 60239C30
P 4550 2550
F 0 "#PWR0108" H 4550 2300 50  0001 C CNN
F 1 "GND" H 4555 2377 50  0000 C CNN
F 2 "" H 4550 2550 50  0001 C CNN
F 3 "" H 4550 2550 50  0001 C CNN
	1    4550 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 1750 4550 1750
Wire Wire Line
	4550 1750 4550 1850
Wire Wire Line
	4700 2450 4550 2450
Connection ~ 4550 2450
Wire Wire Line
	4550 2450 4550 2550
Wire Wire Line
	4700 2350 4550 2350
Connection ~ 4550 2350
Wire Wire Line
	4550 2350 4550 2450
Wire Wire Line
	4700 2250 4550 2250
Connection ~ 4550 2250
Wire Wire Line
	4550 2250 4550 2350
Wire Wire Line
	4700 2150 4550 2150
Connection ~ 4550 2150
Wire Wire Line
	4550 2150 4550 2250
Wire Wire Line
	4700 2050 4550 2050
Connection ~ 4550 2050
Wire Wire Line
	4550 2050 4550 2150
Wire Wire Line
	4700 1950 4550 1950
Connection ~ 4550 1950
Wire Wire Line
	4550 1950 4550 2050
Wire Wire Line
	4700 1850 4550 1850
Connection ~ 4550 1850
Wire Wire Line
	4550 1850 4550 1950
$Comp
L power:GND #PWR0109
U 1 1 6023CC27
P 6150 3200
F 0 "#PWR0109" H 6150 2950 50  0001 C CNN
F 1 "GND" H 6155 3027 50  0000 C CNN
F 2 "" H 6150 3200 50  0001 C CNN
F 3 "" H 6150 3200 50  0001 C CNN
	1    6150 3200
	1    0    0    -1  
$EndComp
Text GLabel 5650 2800 0    50   Input ~ 0
IN_CLOCK
Text GLabel 5650 2600 0    50   Input ~ 0
IN_LOAD
Text GLabel 5650 2900 0    50   Input ~ 0
IN_CLOCK_ENABLE
Text HLabel 5650 1600 0    50   Output ~ 0
IN_DATA_OUT
NoConn ~ 6650 1700
Text HLabel 6650 1600 2    50   Input ~ 0
IN_DATA_IN
$Comp
L power:VCC #PWR0110
U 1 1 6023F67B
P 6150 1300
F 0 "#PWR0110" H 6150 1150 50  0001 C CNN
F 1 "VCC" H 6165 1473 50  0000 C CNN
F 2 "" H 6150 1300 50  0001 C CNN
F 3 "" H 6150 1300 50  0001 C CNN
	1    6150 1300
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0111
U 1 1 60249C62
P 1750 2000
F 0 "#PWR0111" H 1750 1850 50  0001 C CNN
F 1 "VCC" V 1765 2127 50  0000 L CNN
F 2 "" H 1750 2000 50  0001 C CNN
F 3 "" H 1750 2000 50  0001 C CNN
	1    1750 2000
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR0112
U 1 1 6024A5FF
P 1750 2300
F 0 "#PWR0112" H 1750 2050 50  0001 C CNN
F 1 "GND" V 1755 2172 50  0000 R CNN
F 2 "" H 1750 2300 50  0001 C CNN
F 3 "" H 1750 2300 50  0001 C CNN
	1    1750 2300
	0    1    1    0   
$EndComp
$Comp
L Device:R_POT RV1
U 1 1 6023F40B
P 8000 1950
F 0 "RV1" H 7931 1996 50  0000 R CNN
F 1 "R_POT" H 7931 1905 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 8000 1950 50  0001 C CNN
F 3 "~" H 8000 1950 50  0001 C CNN
	1    8000 1950
	1    0    0    -1  
$EndComp
NoConn ~ 8000 2100
NoConn ~ 8150 1950
NoConn ~ 8000 1800
$Comp
L 74xx:74HC595 U2
U 1 1 60243F8C
P 2150 4650
F 0 "U2" H 2150 5431 50  0000 C CNN
F 1 "74HC595" H 2150 5340 50  0000 C CNN
F 2 "Package_DIP:DIP-16_W7.62mm_Socket" H 2150 4650 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/sn74hc595.pdf" H 2150 4650 50  0001 C CNN
	1    2150 4650
	1    0    0    -1  
$EndComp
NoConn ~ 2150 5350
NoConn ~ 2550 5150
NoConn ~ 2550 4950
NoConn ~ 2550 4850
NoConn ~ 2550 4750
NoConn ~ 2550 4650
NoConn ~ 2550 4550
NoConn ~ 2550 4450
NoConn ~ 2550 4350
NoConn ~ 2550 4250
NoConn ~ 1750 4250
NoConn ~ 1750 4450
NoConn ~ 1750 4550
NoConn ~ 1750 4750
NoConn ~ 1750 4850
NoConn ~ 2150 4050
$Comp
L 4xxx:4051 U5
U 1 1 6024BDB2
P 4700 4750
F 0 "U5" H 5244 4796 50  0000 L CNN
F 1 "4051" H 5244 4705 50  0000 L CNN
F 2 "Package_DIP:DIP-16_W7.62mm_Socket" H 4700 4750 50  0001 C CNN
F 3 "http://www.intersil.com/content/dam/Intersil/documents/cd40/cd4051bms-52bms-53bms.pdf" H 4700 4750 50  0001 C CNN
	1    4700 4750
	1    0    0    -1  
$EndComp
NoConn ~ 4200 4150
NoConn ~ 4200 4250
NoConn ~ 4200 4350
NoConn ~ 4200 4450
NoConn ~ 4200 4550
NoConn ~ 4200 4650
NoConn ~ 4200 4750
NoConn ~ 4200 4850
NoConn ~ 4200 5050
NoConn ~ 4200 5150
NoConn ~ 4200 5250
NoConn ~ 4200 5350
NoConn ~ 4700 5650
NoConn ~ 4800 5650
NoConn ~ 5200 4150
NoConn ~ 4700 3850
$Comp
L Device:R_POT RV2
U 1 1 60255269
P 8000 2400
F 0 "RV2" H 7931 2446 50  0000 R CNN
F 1 "R_POT" H 7931 2355 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 8000 2400 50  0001 C CNN
F 3 "~" H 8000 2400 50  0001 C CNN
	1    8000 2400
	1    0    0    -1  
$EndComp
NoConn ~ 8000 2550
NoConn ~ 8150 2400
NoConn ~ 8000 2250
$Comp
L Device:R_POT RV3
U 1 1 60257309
P 8600 1950
F 0 "RV3" H 8531 1996 50  0000 R CNN
F 1 "R_POT" H 8531 1905 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 8600 1950 50  0001 C CNN
F 3 "~" H 8600 1950 50  0001 C CNN
	1    8600 1950
	1    0    0    -1  
$EndComp
NoConn ~ 8600 2100
NoConn ~ 8750 1950
NoConn ~ 8600 1800
$Comp
L Device:R_POT RV4
U 1 1 60257312
P 8600 2400
F 0 "RV4" H 8531 2446 50  0000 R CNN
F 1 "R_POT" H 8531 2355 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 8600 2400 50  0001 C CNN
F 3 "~" H 8600 2400 50  0001 C CNN
	1    8600 2400
	1    0    0    -1  
$EndComp
NoConn ~ 8600 2550
NoConn ~ 8750 2400
NoConn ~ 8600 2250
$Comp
L Device:LED D1
U 1 1 6025A0EA
P 8100 3200
F 0 "D1" H 8093 3417 50  0000 C CNN
F 1 "LED" H 8093 3326 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm" H 8100 3200 50  0001 C CNN
F 3 "~" H 8100 3200 50  0001 C CNN
	1    8100 3200
	1    0    0    -1  
$EndComp
NoConn ~ 7950 3200
NoConn ~ 8250 3200
$Comp
L Device:LED D3
U 1 1 6025B76E
P 8600 3200
F 0 "D3" H 8593 3417 50  0000 C CNN
F 1 "LED" H 8593 3326 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm" H 8600 3200 50  0001 C CNN
F 3 "~" H 8600 3200 50  0001 C CNN
	1    8600 3200
	1    0    0    -1  
$EndComp
NoConn ~ 8450 3200
NoConn ~ 8750 3200
$Comp
L Device:LED D2
U 1 1 6025CC5D
P 8100 3650
F 0 "D2" H 8093 3867 50  0000 C CNN
F 1 "LED" H 8093 3776 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm" H 8100 3650 50  0001 C CNN
F 3 "~" H 8100 3650 50  0001 C CNN
	1    8100 3650
	1    0    0    -1  
$EndComp
NoConn ~ 7950 3650
NoConn ~ 8250 3650
$Comp
L Device:LED D4
U 1 1 6025D5F6
P 8600 3650
F 0 "D4" H 8593 3867 50  0000 C CNN
F 1 "LED" H 8593 3776 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm" H 8600 3650 50  0001 C CNN
F 3 "~" H 8600 3650 50  0001 C CNN
	1    8600 3650
	1    0    0    -1  
$EndComp
NoConn ~ 8450 3650
NoConn ~ 8750 3650
$Comp
L Device:R R17
U 1 1 60268D73
P 7950 4550
F 0 "R17" H 8020 4596 50  0000 L CNN
F 1 "R" H 8020 4505 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 7880 4550 50  0001 C CNN
F 3 "~" H 7950 4550 50  0001 C CNN
	1    7950 4550
	1    0    0    -1  
$EndComp
$Comp
L Device:R R18
U 1 1 60269323
P 8200 4550
F 0 "R18" H 8270 4596 50  0000 L CNN
F 1 "R" H 8270 4505 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 8130 4550 50  0001 C CNN
F 3 "~" H 8200 4550 50  0001 C CNN
	1    8200 4550
	1    0    0    -1  
$EndComp
$Comp
L Device:R R19
U 1 1 6026954D
P 8450 4550
F 0 "R19" H 8520 4596 50  0000 L CNN
F 1 "R" H 8520 4505 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 8380 4550 50  0001 C CNN
F 3 "~" H 8450 4550 50  0001 C CNN
	1    8450 4550
	1    0    0    -1  
$EndComp
$Comp
L Device:R R20
U 1 1 602699BA
P 8700 4550
F 0 "R20" H 8770 4596 50  0000 L CNN
F 1 "R" H 8770 4505 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 8630 4550 50  0001 C CNN
F 3 "~" H 8700 4550 50  0001 C CNN
	1    8700 4550
	1    0    0    -1  
$EndComp
NoConn ~ 7950 4400
NoConn ~ 8200 4400
NoConn ~ 8450 4400
NoConn ~ 8700 4400
NoConn ~ 8700 4700
NoConn ~ 8450 4700
NoConn ~ 8200 4700
NoConn ~ 7950 4700
$EndSCHEMATC
