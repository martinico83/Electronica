//Directivas

#include <16f88.h>
#fuses XT, NOWDT
#use DELAY(internal=4M)

// Registros a definir
// Puerto A
#byte TRISB = 0x86
#byte PORTB = 0x06

// Puerto A - RA0
#bit TRISA_RA0=0x85.0
#bit PORTA_RA0=0x05.0


//Programa principal
void main (){
   //Configuración de periféricos
   // Configuracion de las GPIOs
   TRISB=0x00;
   PORTA_RA0=0x00;
   
   TRISA_RA0=1;
     
   //Bucle infinito
   while(TRUE){
   if(PORTA_RA0 == 0){
   PORTB=0xFF;
   }
   else{
   PORTB=0x00;
   }
   }
}
