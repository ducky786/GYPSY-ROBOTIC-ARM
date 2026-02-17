//#include <ESP32Servo.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>



// ======== Create PWM Object ======== Default I2C address (0x40)
Adafruit_PWMServoDriver PWM = Adafruit_PWMServoDriver();


// Servo Parameters
int SERVO_MIN = 150;
int SERVO_MAX = 600;


// =========== Constants =============

//Servo Channels
const int Gripper = 0;
const int Wrist = 1; // change
const int Forarm = 2; // change
const int Arm = 3; // change
const int Waist = 4; // change



void setup() {
  // put your setup code here, to run once:

  Wire.begin();
  PWM.begin();
  PWM.setPWMFreq(50);
  delay(10);

  setHome();
}

void loop() {
  // put your main code here, to run repeatedly:


}




void setHome(){

  setServoAngle(Gripper, 0);
  setServoAngle(Wrist, 0);
  setServoAngle(Forearm, 0);
  setServoAngle(Arm, 180);
  setServoAngle(Waist, 90);

}

// ============== Set servo angle method ==============
void setServoAngle(uint8_t channel, int angle){

  int pulse = map(angle, 0, 180, SERVO_MIN, SERVO_MAX);
  PWM.setPWM(channel, 0, pulse);

}
