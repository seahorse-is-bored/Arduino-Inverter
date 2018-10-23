 #include <Arduino.h>

/*
Title: Inverter
Author : Benjamin Brown
 */
int led6 = 11;
int led5 = 9;
int led4 = 5;
int led3 = 10;
int led2 = 6;
int led1 = 3;
int InputPin = A5;


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);


}

class WriteTo
{
  public:
    void Zero(){
      analogWrite(led1, 0);
      analogWrite(led2, 0);
      analogWrite(led3, 0);
      analogWrite(led4, 0);
      analogWrite(led5, 0);
      analogWrite(led6, 0);
    }
};
void loop()
{
  WriteTo writeTo;
  float Frequency;
  int MaxFrequency;
  int Time;
  float PulseWidth;
  int Input = analogread(InputPin); //Set Input (0-1023 Optimised for arduino Analog Pins).
  for(;;)
  {
    MaxFrequency = 70; //Set Motor Maximum Frequency. (Check IGBT DataSheet For their speed )
    Time = 1000;
    Frequency = Input/(1023/MaxFrequency);
    PulseWidth = (Time/Frequency)/6;
    if (Input <= 14)
    {
      writeTo.Zero();
    }
    else
    {
      analogWrite(led6, 1023);
      analogWrite(led5, 0);
      delay(PulseWidth/3);
      analogWrite(led4, 1023);
      analogWrite(led3, 0);
      delay(PulseWidth/3);
      analogWrite(led2, 1023);
      analogWrite(led1, 0); //Half
      delay(PulseWidth/3);
      analogWrite(led6, 0);
      analogWrite(led5, 1023);
      delay(PulseWidth/3);
      analogWrite(led4, 0);
      analogWrite(led3, 1023);
      delay(PulseWidth/3);
      analogWrite(led2, 0);
      analogWrite(led1, 1023);
      delay(PulseWidth/3);
      Input == 0; 
      
    }
  
  
  }
}
