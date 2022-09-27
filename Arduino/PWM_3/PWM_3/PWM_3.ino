void setup()
{
for (int i =9 ; i<12 ; i++)
pinMode(i, OUTPUT);
}
void loop()
{
Color(random(255), random(255), random(255)) ;
delay(500);
}
void Color(int R, int G, int B)
{
analogWrite(9 , R) ; // Rojo
analogWrite(10, G) ; // Green - Verde
analogWrite(11, B) ; // Blue - Azul
}
