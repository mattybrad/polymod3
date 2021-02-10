EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 1 2
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
L teensy:Teensy4.1 U1
U 1 1 6010669C
P 3450 3450
F 0 "U1" H 3450 6015 50  0000 C CNN
F 1 "Teensy4.1" H 3450 5924 50  0000 C CNN
F 2 "teensy:Teensy41" H 3050 3850 50  0001 C CNN
F 3 "" H 3050 3850 50  0001 C CNN
	1    3450 3450
	1    0    0    -1  
$EndComp
NoConn ~ 3150 4750
NoConn ~ 3600 4750
NoConn ~ 3750 4750
NoConn ~ 4550 4350
NoConn ~ 4550 4250
NoConn ~ 4550 4150
NoConn ~ 4550 4050
NoConn ~ 4550 3950
NoConn ~ 4550 3850
NoConn ~ 2350 4450
NoConn ~ 2350 4350
NoConn ~ 2350 4250
NoConn ~ 2350 4150
NoConn ~ 2350 4050
NoConn ~ 2350 3900
NoConn ~ 2350 3800
NoConn ~ 4550 1150
NoConn ~ 4550 1300
NoConn ~ 3450 4750
NoConn ~ 3300 4750
$Comp
L power:GND #PWR0101
U 1 1 6024265D
P 2350 1300
F 0 "#PWR0101" H 2350 1050 50  0001 C CNN
F 1 "GND" V 2355 1172 50  0000 R CNN
F 2 "" H 2350 1300 50  0001 C CNN
F 3 "" H 2350 1300 50  0001 C CNN
	1    2350 1300
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0102
U 1 1 60242A46
P 4550 2700
F 0 "#PWR0102" H 4550 2450 50  0001 C CNN
F 1 "GND" V 4555 2572 50  0000 R CNN
F 2 "" H 4550 2700 50  0001 C CNN
F 3 "" H 4550 2700 50  0001 C CNN
	1    4550 2700
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR0103
U 1 1 602437FE
P 1200 2700
F 0 "#PWR0103" H 1200 2550 50  0001 C CNN
F 1 "VCC" V 1215 2827 50  0000 L CNN
F 2 "" H 1200 2700 50  0001 C CNN
F 3 "" H 1200 2700 50  0001 C CNN
	1    1200 2700
	0    -1   -1   0   
$EndComp
NoConn ~ 4550 1500
$Comp
L power:GND #PWR0104
U 1 1 602441A9
P 4550 1400
F 0 "#PWR0104" H 4550 1150 50  0001 C CNN
F 1 "GND" V 4555 1272 50  0000 R CNN
F 2 "" H 4550 1400 50  0001 C CNN
F 3 "" H 4550 1400 50  0001 C CNN
	1    4550 1400
	0    -1   -1   0   
$EndComp
Text GLabel 4550 2200 2    50   Output ~ 0
OUT_LATCH
Text GLabel 4550 2300 2    50   Output ~ 0
OUT_CLOCK
Text GLabel 2350 2200 0    50   Output ~ 0
IN_LOAD
Text GLabel 2350 2300 0    50   Output ~ 0
IN_CLOCK_ENABLE
Text GLabel 2350 2400 0    50   Output ~ 0
IN_CLOCK
NoConn ~ 4550 2100
NoConn ~ 4550 2000
NoConn ~ 4550 1900
NoConn ~ 4550 1800
NoConn ~ 4550 1600
NoConn ~ 2350 3100
NoConn ~ 2350 3200
NoConn ~ 2350 3300
NoConn ~ 2350 3400
NoConn ~ 2350 3500
NoConn ~ 2350 3600
NoConn ~ 4550 3600
NoConn ~ 4550 3500
NoConn ~ 4550 3400
NoConn ~ 4550 3300
NoConn ~ 4550 3200
NoConn ~ 4550 3100
NoConn ~ 4550 3000
NoConn ~ 4550 2900
NoConn ~ 4550 2800
NoConn ~ 4550 2600
NoConn ~ 4550 2500
NoConn ~ 4550 2400
Wire Wire Line
	4550 1700 5400 1700
Wire Wire Line
	5400 1700 5400 2100
Wire Wire Line
	5400 2100 5800 2100
Wire Wire Line
	5400 4900 5400 2800
Wire Wire Line
	5400 2800 5800 2800
NoConn ~ 5800 2650
NoConn ~ 5800 2250
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 6024B298
P 1250 2700
F 0 "#FLG0101" H 1250 2775 50  0001 C CNN
F 1 "PWR_FLAG" H 1250 2873 50  0000 C CNN
F 2 "" H 1250 2700 50  0001 C CNN
F 3 "~" H 1250 2700 50  0001 C CNN
	1    1250 2700
	-1   0    0    1   
$EndComp
Wire Wire Line
	1250 2700 1200 2700
$Comp
L Mechanical:MountingHole H1
U 1 1 6027190A
P 2650 5350
F 0 "H1" H 2750 5396 50  0000 L CNN
F 1 "MountingHole" H 2750 5305 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 2650 5350 50  0001 C CNN
F 3 "~" H 2650 5350 50  0001 C CNN
	1    2650 5350
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H2
U 1 1 60272B0C
P 2650 5550
F 0 "H2" H 2750 5596 50  0000 L CNN
F 1 "MountingHole" H 2750 5505 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 2650 5550 50  0001 C CNN
F 3 "~" H 2650 5550 50  0001 C CNN
	1    2650 5550
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H3
U 1 1 60272F90
P 2650 5750
F 0 "H3" H 2750 5796 50  0000 L CNN
F 1 "MountingHole" H 2750 5705 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 2650 5750 50  0001 C CNN
F 3 "~" H 2650 5750 50  0001 C CNN
	1    2650 5750
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H4
U 1 1 6027317A
P 2650 5950
F 0 "H4" H 2750 5996 50  0000 L CNN
F 1 "MountingHole" H 2750 5905 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 2650 5950 50  0001 C CNN
F 3 "~" H 2650 5950 50  0001 C CNN
	1    2650 5950
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H5
U 1 1 60273353
P 2650 6150
F 0 "H5" H 2750 6196 50  0000 L CNN
F 1 "MountingHole" H 2750 6105 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 2650 6150 50  0001 C CNN
F 3 "~" H 2650 6150 50  0001 C CNN
	1    2650 6150
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H6
U 1 1 602735AA
P 2650 6350
F 0 "H6" H 2750 6396 50  0000 L CNN
F 1 "MountingHole" H 2750 6305 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 2650 6350 50  0001 C CNN
F 3 "~" H 2650 6350 50  0001 C CNN
	1    2650 6350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR02
U 1 1 6026FEC1
P 10550 3350
F 0 "#PWR02" H 10550 3100 50  0001 C CNN
F 1 "GND" V 10555 3222 50  0000 R CNN
F 2 "" H 10550 3350 50  0001 C CNN
F 3 "" H 10550 3350 50  0001 C CNN
	1    10550 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	10650 3350 10550 3350
Connection ~ 10550 3350
$Comp
L power:GND #PWR01
U 1 1 60270E1B
P 10050 2750
F 0 "#PWR01" H 10050 2500 50  0001 C CNN
F 1 "GND" V 10055 2622 50  0000 R CNN
F 2 "" H 10050 2750 50  0001 C CNN
F 3 "" H 10050 2750 50  0001 C CNN
	1    10050 2750
	0    1    1    0   
$EndComp
$Comp
L 4xxx:4051 U6
U 1 1 602656EA
P 10550 2450
F 0 "U6" H 11094 2496 50  0000 L CNN
F 1 "4051" H 11094 2405 50  0000 L CNN
F 2 "Package_DIP:DIP-16_W7.62mm_Socket" H 10550 2450 50  0001 C CNN
F 3 "http://www.intersil.com/content/dam/Intersil/documents/cd40/cd4051bms-52bms-53bms.pdf" H 10550 2450 50  0001 C CNN
	1    10550 2450
	1    0    0    -1  
$EndComp
$Sheet
S 5800 1850 2100 1400
U 60216398
F0 "Module1" 50
F1 "Module1.sch" 50
F2 "OUT_DATA_IN" I L 5800 2100 50 
F3 "OUT_DATA_OUT" O L 5800 2250 50 
F4 "IN_DATA_OUT" O L 5800 2800 50 
F5 "IN_DATA_IN" I L 5800 2650 50 
F6 "ANA_OUT" O R 7900 2100 50 
F7 "LED_DATA_OUT" O R 7900 2850 50 
F8 "LED_DATA_IN" I R 7900 2700 50 
$EndSheet
Text GLabel 2350 1400 0    50   Output ~ 0
ANA_CHAN0
Text GLabel 2350 1500 0    50   Output ~ 0
ANA_CHAN1
Text GLabel 2350 1600 0    50   Output ~ 0
ANA_CHAN2
Text Label 2350 1700 2    50   ~ 0
ANA_MAIN_CHAN0
Text Label 2350 1800 2    50   ~ 0
ANA_MAIN_CHAN1
Text Label 2350 1900 2    50   ~ 0
ANA_MAIN_CHAN2
Text Label 10050 2850 2    50   ~ 0
ANA_MAIN_CHAN0
Text Label 10050 2950 2    50   ~ 0
ANA_MAIN_CHAN1
Text Label 10050 3050 2    50   ~ 0
ANA_MAIN_CHAN2
Wire Wire Line
	850  2500 850  4900
Wire Wire Line
	850  2500 2350 2500
Wire Wire Line
	850  4900 5400 4900
Wire Wire Line
	2350 2700 1250 2700
Connection ~ 1250 2700
NoConn ~ 2350 3000
NoConn ~ 2350 2900
NoConn ~ 2350 2800
Text Label 2350 2600 2    50   ~ 0
ANA_MAIN
Text Label 11050 1850 0    50   ~ 0
ANA_MAIN
NoConn ~ 10050 2550
NoConn ~ 10050 2450
NoConn ~ 10050 2350
NoConn ~ 10050 2250
NoConn ~ 10050 2150
NoConn ~ 10050 2050
NoConn ~ 10050 1950
Wire Wire Line
	7900 2100 8800 2100
Wire Wire Line
	8800 2100 8800 1850
Wire Wire Line
	8800 1850 10050 1850
$Comp
L power:VCC #PWR0107
U 1 1 6027B171
P 10550 1550
F 0 "#PWR0107" H 10550 1400 50  0001 C CNN
F 1 "VCC" V 10565 1677 50  0000 L CNN
F 2 "" H 10550 1550 50  0001 C CNN
F 3 "" H 10550 1550 50  0001 C CNN
	1    10550 1550
	1    0    0    -1  
$EndComp
NoConn ~ 7900 2700
NoConn ~ 7900 2850
Text GLabel 2350 2000 0    50   Output ~ 0
LED_CLOCK
Text GLabel 2350 2100 0    50   Output ~ 0
LED_LATCH
$EndSCHEMATC
