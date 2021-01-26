EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 1 1
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
L teensy:Teensy4.1 U?
U 1 1 6010669C
P 8300 6100
F 0 "U?" H 8300 8665 50  0000 C CNN
F 1 "Teensy4.1" H 8300 8574 50  0000 C CNN
F 2 "" H 7900 6500 50  0001 C CNN
F 3 "" H 7900 6500 50  0001 C CNN
	1    8300 6100
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC595 U?
U 1 1 60108BB0
P 2850 2200
F 0 "U?" H 2850 2981 50  0000 C CNN
F 1 "74HC595" H 2850 2890 50  0000 C CNN
F 2 "" H 2850 2200 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/sn74hc595.pdf" H 2850 2200 50  0001 C CNN
	1    2850 2200
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC595 U?
U 1 1 601095F2
P 4200 2200
F 0 "U?" H 4200 2981 50  0000 C CNN
F 1 "74HC595" H 4200 2890 50  0000 C CNN
F 2 "" H 4200 2200 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/sn74hc595.pdf" H 4200 2200 50  0001 C CNN
	1    4200 2200
	1    0    0    -1  
$EndComp
Text Notes 3100 1100 0    50   ~ 0
Output shift registers
$Comp
L 74xx:74HC595 U?
U 1 1 6010CD70
P 2850 4650
F 0 "U?" H 2850 5431 50  0000 C CNN
F 1 "74HC595" H 2850 5340 50  0000 C CNN
F 2 "" H 2850 4650 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/sn74hc595.pdf" H 2850 4650 50  0001 C CNN
	1    2850 4650
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC595 U?
U 1 1 6010CD76
P 4200 4650
F 0 "U?" H 4200 5431 50  0000 C CNN
F 1 "74HC595" H 4200 5340 50  0000 C CNN
F 2 "" H 4200 4650 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/sn74hc595.pdf" H 4200 4650 50  0001 C CNN
	1    4200 4650
	1    0    0    -1  
$EndComp
Text Notes 3100 3550 0    50   ~ 0
Input shift registers
$Comp
L 4xxx:4051 U?
U 1 1 6010D122
P 12050 2400
F 0 "U?" H 12594 2446 50  0000 L CNN
F 1 "4051" H 12594 2355 50  0000 L CNN
F 2 "" H 12050 2400 50  0001 C CNN
F 3 "http://www.intersil.com/content/dam/Intersil/documents/cd40/cd4051bms-52bms-53bms.pdf" H 12050 2400 50  0001 C CNN
	1    12050 2400
	1    0    0    -1  
$EndComp
Text Notes 11850 1150 0    50   ~ 0
Analog controls
$EndSCHEMATC
