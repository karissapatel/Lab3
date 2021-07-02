/*
 * Project Lab3
 * Description:
 * Author:
 * Date:
 */
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.

  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);

  


}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

  //color red
  analogWrite(D5, 255);
  analogWrite(D6, 0);
  analogWrite(D7,0);
  delay(1000);

  //color green
  analogWrite(D5,0);
  analogWrite(D6, 255);
  analogWrite(D7,0);
  delay(1000);

  //color blue
  analogWrite(D5,0);
  analogWrite(D6,0);
  analogWrite(D7,255);
  delay(1000);

  //color orange
  analogWrite(D5, 255);
  analogWrite(D6, 165);
  analogWrite(D7, 0);
  delay(1000);

  //color yellow
  analogWrite(D5,255);
  analogWrite(D6,255);
  analogWrite(D7,0);
  delay(1000);

  //color purple
  analogWrite(D5, 139);
  analogWrite(D6, 0);
  analogWrite(D7,128);

  // color cyan
  analogWrite(D5,0);
  analogWrite(D6, 255);
  analogWrite(D7, 255);


  
   
    
}