/*
  Software serial multple serial test
 
 Receives from the hardware serial, sends to software serial.
 Receives from software serial, sends to hardware serial.
 
 The circuit: 
 * RX is digital pin 10 (connect to TX of other device)
 * TX is digital pin 11 (connect to RX of other device)
 
 Note:
 Not all pins on the Mega and Mega 2560 support change interrupts, 
 so only the following can be used for RX: 
 10, 11, 12, 13, 50, 51, 52, 53, 62, 63, 64, 65, 66, 67, 68, 69
 
 Not all pins on the Leonardo support change interrupts, 
 so only the following can be used for RX: 
 8, 9, 10, 11, 14 (MISO), 15 (SCK), 16 (MOSI).
 
 
 */
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup()  
{
  // Open serial communications and wait for port to open:
  Serial.begin(4800);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  Serial.println("Serial Ready");
  // set the data rate for the SoftwareSerial port
  mySerial.begin(4800);
  mySerial.println("Transmission Ready....");
}
void loop() // run over and over
{
  char ch; //Char Buffer
  /*if(Serial.available()>0){
  while(Serial.available()>0){
     ch = Serial.read();
     Serial.write(ch);
     mySerial.write(ch);
  }
  Serial.write(ch);
  }
  */
 
  if(mySerial.available()>0){
  while(mySerial.available()>0){
    ch = mySerial.read();
    Serial.write(ch);
    delay(10);
  }
  Serial.write("\n");
  }  
 
}

