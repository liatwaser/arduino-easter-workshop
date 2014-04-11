// PWM~ breathing LED - stage2

int d = 10; // variable d to store the dealy time

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
  // duty cycle range from 0-255
  for (int a = 0; a < 256; a++) // fade in
  {
    analogWrite(9, a); // this function takes (pin number, duty cycle value)
    analogWrite(10, a);
    analogWrite(11, a);
    delay(d);
  }

  for (int a = 255; a >= 0; a--) // fade out 
  {
    analogWrite(9, a);
    analogWrite(10, a);
    analogWrite(11, a);
    delay(d);
  }
  delay(500);
}


