# GYPSY-ROBOTIC-ARM
Gypsy is a 5 axis robotic arm powered by a Raspberry Pi4 small enough, to play around with on your desk.

### 1/18/26
### Research
This is my biggest project yet! I have wanted to build a robotic arm for a long time now and seeing I have gained a lot of experience from my previous projects; I am much more confident in starting this big one! I feel that I would end up learning a ton on CAD and Coding. This is my passion project! 

For this project I want to make sure It stays cheap as possible! Robotic arms are kind of expensive, and they are a great way of learning key robotics concepts like inverse kinematics (which I hope to learn). So I hope to keep this project cheap as possible for anyone who might wanna try building this!

At the start of the project, I originally wanted to create 6 axis robotic arm all powered with Nema Stepper motors! But... seeing all the other robotic arm projects, I felt it would end up becoming really expensive and too complicated for my beginner level brain. So, I dumbed it down a little and settled on a 5 axis Robotic arm with servo motors. 

These axis include:
- The base Rotation
- The shoulder Rotation
- The Forearm Rotation
- The wrist Rotation
- The End effector 

For a robotic arm to work you need to know how to move the end effector to the desired point. To be able to do this you need to know Inverse Kinematics. This is essentially a way of mathematically solving the joint variables to get the perfect end effector position. In my research on this topic, I came across this lesson from Clemson University which does a great job on teaching this stuff. Math is not my strongest suit so I will be spending a lot of time learning this stuff.

[Lesson by Clemson University] (https://opentextbooks.clemson.edu/wangrobotics/chapter/inverse-kinematics/)



### CAD

I started a bit Of the CAD too! This is only my third time CADing so am still learning some stuff. Today I worked on the base of GYPSY and finished a bit of the first axis. I had to think a lot on how I might want to approach this part of the axis. I Definity did NOT want to use Barings for this project as for one it would drastically increase the price of the arm due to such large Barings and also because of the past troubles I've had with them. In my last project when I used Barings, I had unfortunate results with them because of the tolerances. I never seemed to get the fit right. So, I ditched the idea of the Barings and settled on simply having two pieces loosely fit around a notch so it could spin. Sure, it might not be the smoothest, but it will spin pretty good, hopefully.

<img width="698" height="765" alt="image" src="https://github.com/user-attachments/assets/9d784cf5-d2dd-41c7-9bd0-8fd6eba2bc9e" />


<img width="834" height="521" alt="image" src="https://github.com/user-attachments/assets/d7f71a11-9e43-40dc-a1e3-0e20d9fcc2e9" />

### 1/21/26
### CAD

Today I continued to work on the CAD for GYPSY! I worked a little more on the shoulder axis and the electronics box. The shoulder joint will contain two servos, one for the shoulder itself and the other for the forearm joint. These joints will be powered by 20kg servos for the much-needed torque. The joint is connected with a circular servo horn that gets screwed into the servo and the rotating base. The side that doesn't have a servo, is connected with a rod held by a C-clip. I found using C-clips from my last project really useful as they were very simple and effective. I really spent a lot of time making sure that the servo rotation part was perfectly aligned with the rod as any miss alignment would completely mess up the pivot.

GYPSY is powered by a RPI4, so I needed to create proper housing for it, so it doesn't look really messy. The electronic Box is a simple box with screw mounts for the RPI. Nothing fancy, kept it simple! 

![image](/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6ODc4NjQsInB1ciI6ImJsb2JfaWQifX0=--72fd05485f99d4595e211dc82dcc7caf8f9a6b6e/image.png)

![image](/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6ODc4NjUsInB1ciI6ImJsb2JfaWQifX0=--58fd02b8ad50577410de2269a6905881c5cfc8d1/image.png)

![image](/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6ODc4NjgsInB1ciI6ImJsb2JfaWQifX0=--a79f1447ca12df666e1e66a8b8e3f806b262126e/image.png)

### 1/25/26
### CAD
For the past couple of days, I spent more time on CAD! It is safe to say the CADing is now nearing its end. After this is done, I plan on fabricating the wrist as that is the only part that I could do without receiving the grant yet! But until then I am focused on completing GYPSY's CAD and code!


### 1. Forearm
After completing a bit of the base arm, I moved up to working on my third axis, the Forearm. This axis is similar to the base arm portion of GYPSY as it contains a MG996R servo motor. This servo is also connected to the pivoting joint via a circular servo connector which screws into the joint. This joint directly pivots the wrist. Through this whole CADing prosses I contently feared that this servo would not have enough torque to pick up anything let alone hold itself up. I don't have enough space to add gearing so the only possible option if that happens is to swap the servo motors to 20kg servos as they have almost the exact servo profile as the MG996R.

### 2. Wrist and End Effecter

The while wrist pivot is powered by the servo inside the forearm. Made it this way so it has the littlest possible weight at the top. Now inside the wrist, is a MG90 servo. This servo is powers the end effector. During my research process I looked at a lot of robotic arm designs that had crazy end effectors. they contained gears and such to open and close a clamp for the end effecter. This for me, looked very complicated as it meant that I had to somehow cad custom gears and stuff for the end effector. I did not want to go that route. I eventually came across an end effecter design on YouTube that looked super simple and unique! It uses two clamps that are pulled together with a rubber band. In the middle was a servo horn and when you wanted to open the arm, the servo horn would rotate 90 degrees splitting the claps apart. And to close the servo would simply rotate back to 0 degrees and the rubber band would pull the clamps back together. I loved this design because of how easy it was and implemented it! The way this end effecter is designed, I could easily create webcam mounts for it in the future for object detection and tracking!

Credit: https://youtu.be/AIsVlgopqJc?si=-omXVJZqu1W9qJ8N

<img width="293" height="595" alt="image" src="https://github.com/user-attachments/assets/39a7b347-1993-4434-b7c8-38d4ad18736e" />

The yellow Band is the Rubber band.

### 1/26/26
### CAD
The CAD is finally done! I completed the cad by adding some last details like names and C-clip joints. The joint is a simple rod that goes through the arm rotation axis and held together with a 2 C-clips. This design worked great for my last project, so I hope it works the same now!

Today while cleaning out some of my stuff, I came across a neopixel strip from a Pico kit that I bought a while back. I instantly though that I should add this to the front, so I created a groove in the base for it be stuck on! I could imagine the different sick patters I could display with this! I can tell it's going to come out awesome!!

<img width="570" height="746" alt="image" src="https://github.com/user-attachments/assets/be4c3743-9115-43a3-b2e6-dee2de224557" />




### FABRICATION
For my fabrication I wont be able to do too much as I do not have majority of the parts. I can however fabricate the wrist! With the help of my robotics team, they kindly allowed me to use the 3d printer for this project! So, I printed the parts out and put it together and wrote a simple loop to test it out! The wrist came out so good. The tolerance was perfect and everything fit together seamlessly. 

<img width="281" height="443" alt="image" src="https://github.com/user-attachments/assets/e9f487dc-733f-4ab0-aaba-277e07b8af8c" />

Here is the video clip of it working:
[IMG_3051](/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6OTIxNzMsInB1ciI6ImJsb2JfaWQifX0=--30f1914dca1a4efa6c7e6b12479e9b36fba33f8f/IMG_3051.MOV)

The grip on the wrist is fine but I think I need to add some kind of rubber or foam for the best possible grip!

After that I moved onto writing some test code for the neopixel and came up with simple patterns.

<img width="540" height="743" alt="image" src="https://github.com/user-attachments/assets/a5581c9c-b390-4edd-8b87-f15d71dadf15" />


video of testing the light pattern.
[IMG_3075](/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6OTIxNzcsInB1ciI6ImJsb2JfaWQifX0=--d5ad71ac91c631e579ebd244bddf80ecedc21ad2/IMG_3075.MOV)







