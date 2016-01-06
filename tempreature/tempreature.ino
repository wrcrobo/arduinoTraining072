/*
* DIGITAL THERMOMETER WITH TEMPREATURE SENSING IC LM35
* CODE BY: BIST, keshav [dSquadAdmin]
* URL: http://keshavbist.com.np
* For Robotics Club of Pashchimanchal Campus
* (http://robotics.wrc.edu.np)
*
* HARDWARE CONNECTION:
* PIN1 : +5v
* PIN2 : Arduino Pin A0
* PIN3 : Ground
*/
void setup(){
  pinMode(A0, INPUT);
  Serial.begin(9600);
  while(!Serial){
  }
}

void loop(){
  float temp;
  temp = analogRead(A0)/2;
  Serial.write("Temp=");
  Serial.println(temp, HEX);
  delay(100):
  
  
}

