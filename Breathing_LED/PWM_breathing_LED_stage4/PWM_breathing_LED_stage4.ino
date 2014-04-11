// PWM~ breathing LED - stage4

int d = 10; // variable d to store the dealy time
int p;

void setup()
{
  // intialise pin 9-11 as outputs
  for (int p = 9; p < 12; p++)
  { 
    pinMode(p, OUTPUT);
  }
}

void loop()
{
  // fade in starts from pin 9 and goes up
  for (int p = 9; p < 12; p++)
  {
    // duty cycle range from 0-255
    for (int a = 0; a < 256; a++)  // fade in
    {
      analogWrite(p, a); // this function takes (pin number, duty cycle value)
      delay(d);
    }
  }
  for (int p = 11; p >=8; p--) 
  {
    for (int a = 255; a >= 0; a--) // fade out 
    {
      analogWrite(p, a);
      delay(d);
    }
  }
}








