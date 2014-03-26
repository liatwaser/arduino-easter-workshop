// 6 LEDs blinking light wave - stage3

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
  // loop from pin 8 and going up
  for ( int p = 8; p < 14; p++) {
    digitalWrite(p, HIGH); // turn LED on
    delay(d);              // wait 
    digitalWrite(p, LOW);  // turn LED off
    //delay(d);
  }
    
  // loop will start from top again  
}
