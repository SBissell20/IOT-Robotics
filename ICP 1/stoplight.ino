int switchState = 0;
bool toggle = false;
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop(){
  switchState = digitalRead(2);
  if(switchState == HIGH){
    // the button is pressed
  
    toggle = true;
    digitalWrite(3, LOW); //green LED
    digitalWrite(4, LOW); //Red LED
    digitalWrite(5, LOW); //red LED
  }
 
  if(toggle) {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250); // wait for a quarter seconds
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(3, HIGH);
    digitalWrite(5, LOW);
    delay(250);
  }

}
