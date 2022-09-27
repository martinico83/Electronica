void setup()
{
pinMode(9, OUTPUT) ;
}
void loop()
{
analogWrite(9,0); // Ciclo de trabajo del 0 %
delay(300);
analogWrite(9,64); // Ciclo de trabajo del 25 %
delay(300);
analogWrite(9,127); // Ciclo de trabajo del 50 %
delay(300);
analogWrite(9,255); // Ciclo de trabajo del 100 %
delay(300);
analogWrite(9,127); // Ciclo de trabajo del 50 %
delay(300);
analogWrite(9,64); // Ciclo de trabajo del 25 %
delay(300);
}
