### GYPSY

### What is Gypsy?
Gypsy is a 5-axis robotic arm powered by an ESP32. It uses 2 20kg servos, an MG99S servo, and an MG90 servo for simplicity, torque, and affordability. It stands around a foot tall with the ability to be controlled by an Xbox controller. All parts are 3D printed to allow future modifications and easy maintenance.


### How to control the arm?
To use the Robotic arm, first plug in the power to the ESP32 and the servo motor controller. Next, take your Bluetooth Xbox controller switch into pairing mode. Using the BluePad32 library, the controller and the ESP32 should automatically pair. After the controller has paired, you can click X to move the arm into a homed position. Using the Left joystick, you can move the end effector up and down. Using the right joystick, you can move the end effector left, right, front, and back. Finally, using the left and right bumpers, you can open and close the end effector.



### Why I decided to make GYPSY?
I decided to make gypsy because of my love for robotics! I have just recently gotten into this wonderful field of engineering and wanted to expand my knowledge. Through Hack Club's grant programs, I have created RC cars and macropads, where I learned a lot! But now I wanna learn more advanced concepts such as Inverse Kinematics, CAD designing. I built Gypsy as a project where I could learn these advanced concepts and apply them to the arm. I later even hope to add object detection using OpenCV.
