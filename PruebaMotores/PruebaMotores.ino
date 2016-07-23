/////////////////////////////////////////////////////////////////////////////////////
//
//File: PruebaMotores.ino
//
//Author: Adrián Teso
//
//Date: 2016/07/23
//
//Version 00_00
//
//Description: This is just a sample project to test the Motors expansion shield.
/////////////////////////////////////////////////////////////////////////////////////
#include <Servo.h>
#include <Arduino.h>

Servo sServo1;
Servo sServo2;

const int iServo1Index = 9;
const int iServo2Index = 10;
const int iMotorIndex  = 11;


int position;
bool swap;

//The setup function is called once at startup of the sketch
void setup()
{
// Add your initialization code here
	sServo1.attach(iServo1Index);
	sServo2.attach(iServo2Index);
	position = 0;
	swap = true;
	Serial.begin(9600);
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
	position = swap ? (position + 1) : (position - 1);
	swap = position == 0 || position == 180 ? !swap : swap;
	sServo1.write(position);
	sServo2.write(180-position);
	Serial.print("Position: ");
	Serial.print(position);
	Serial.print(" Swap: ");
	Serial.println(swap);
	delay(200);


}
