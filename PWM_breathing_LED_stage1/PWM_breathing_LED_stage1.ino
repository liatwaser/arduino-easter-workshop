// PWM~ breathing LED - stage1

int d = 10; // variable d to store the dealy time

void setup()
{
  // intialise pin 9 as output 
  pinMode(9, OUTPUT);
}

void loop()
{
  // duty cycle range from 0-255
  for (int a = 0; a < 256; a++) // fade in
  {
    analogWrite(9, a); // this function takes (pin number, duty cycle value
    delay(d);
  }

  for (int a = 255; a >= 0; a--) // fade out 
  {
    analogWrite(9, a);
    delay(d);
  }
  delay(500);
}

