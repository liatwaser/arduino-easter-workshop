// 6 LEDs blinking light wave - stage1
void setup()
{
  // setting up pins 8-13 as outputs 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH); // turn LED on
  delay(500);            // wait 500 milliseconds (half a second)
  digitalWrite(8, LOW);  // turn LED off
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  // loop will start from top again  
}
