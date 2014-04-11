// 6 LEDs blinking light wave - stage2

int d = 100; // using a variable to store the delay time 

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
  delay(d);            // wait d milliseconds 
  digitalWrite(8, LOW);  // turn LED off
  digitalWrite(9, HIGH);
  delay(d);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(d);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(d);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(d);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(d);
  digitalWrite(13, LOW);
  // loop will start from top again  
}
