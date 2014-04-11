// 6 LEDs blinking light wave - stage4

int d = 100; // using a variable to store the delay time 

void setup()
{
  // setting up pins 8-13 as outputs using for statement 
  for ( int p = 8; p < 14; p++) {
    pinMode(p, OUTPUT);
  }
}

void loop()
{
  // loop from pin 8 and going up
  for ( int p = 8; p < 14; p++) {
    digitalWrite(p, HIGH); // turn LED on
    delay(d);              // wait 
    digitalWrite(p, LOW);  // turn LED off

  }
  // reverse loop from pin 13 snd going down
  for (int p = 13; p > 7; p--) {
    digitalWrite(p, HIGH); 
    delay(d);               
    digitalWrite(p, LOW); 
  }

  // loop will start from top again  
}


