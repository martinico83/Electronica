//Directivas

#include <16f877a.h>
#fuses xt, nowdt
#use delay(clock=4M)

#byte TRISC = 0x87
#byte PORTC = 0x07
//Variables globales


//Interrupciones



//Programa principal
void main (){
   //Configuración de periféricos
   TRISC = 0x00;
   PORTC = 0x00;
   
   
   //Bucle infinito
   while(1){
   PORTC = 0b00000001;
   delay_ms(1000);
   PORTC = 0b00000000;
   delay_ms(1000);   
   }
}
