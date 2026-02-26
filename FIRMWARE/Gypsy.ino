//#include <ESP32Servo.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <InverseK.h>



// ======== Create PWM Object ======== Default I2C address (0x40)
Adafruit_PWMServoDriver PWM = Adafruit_PWMServoDriver();



// Servo Parameters
int SERVO_MIN = 150;
int SERVO_MAX = 600;


// =========== Constants =============

//Servo Channels
const int Gripper = 0;
const int Wrist = 1; // change
const int Forearm = 2; // change
const int Arm = 3; // change
const int Waist = 4; // change


// Robot Arm Lengths (dementions in MM) (including joint length)
const float FORARM_LENGTH = 81.900;
const float ARM_LENGTH = 81.997;
const float WRIST_LENGTH = 52.703;

// const float FORARM_LENGTH = 200;
// const float ARM_LENGTH = 200;
// const float WRIST_LENGTH = 200;


// =========== End Pos Coordinates =============
float x = 50.0;
float y = 50.0;
float z = 50.0;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  Wire.begin();
  PWM.begin();
  PWM.setPWMFreq(50);
  delay(500);

  // =========== SET UP INVERSE KINAMATICS LINKS ===========
  Link base, upperarm, forearm, hand;

  base.init(0, -PI, PI);
  upperarm.init(ARM_LENGTH, -PI, PI);
  forearm.init(FORARM_LENGTH, -PI, PI);
  hand.init(WRIST_LENGTH, -PI, PI);


  InverseK.attach(base, upperarm, forearm, hand);

  float a0, a1, a2, a3;

    if(InverseK.solve(150, 0, 0, a0, a1, a2, a3, b2a(90.0))){
    
    setServoAngle(Waist,a2b(a0));
    setServoAngle(Arm,a2b(a1));
    setServoAngle(Forearm,a2b(a2));
    setServoAngle(Wrist,a2b(a3));
    Serial.println("Done");
      
  }else{
    Serial.println("nu uh");
  }


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

// Quick conversion from the Braccio angle system to radians
float b2a(float b){
  return b / 180.0 * PI - HALF_PI;
}

// Quick conversion from radians to the Braccio angle system
float a2b(float a) {
  return (a + HALF_PI) * 180 / PI;
}

// ============== Set servo angle method ==============
void setServoAngle(uint8_t channel, int angle){
  
  int pulse = map(angle, 0, 180, SERVO_MIN, SERVO_MAX);
  PWM.setPWM(channel, 0, pulse);

}
