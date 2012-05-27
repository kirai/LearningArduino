/*
* Sends the X/4 position of the mouse to the serial port (We asume Arduino is listening to the values being sent)
*/

import processing.serial.*;
Serial port;
 
void setup() {
 size(1024, 550);
 
 println("Available serial ports:");
 println(Serial.list());
 
 port = new Serial(this, Serial.list()[0], 9600);  
}
 
void draw() {
 for (int i = 0; i < 1024; i++) {
   stroke(i/4);
   line(i, 0, i, 550);
 }
 
 port.write(mouseX/4);
}
