// DIRECTIVAS
#include <16f877a.h>
#fuses xt, nowdt
#use delay(clock=4M)

// REGISTROS A DEFINIR

  //PUERTO B
   #byte TRISB=0x86
   #byte PORTB=0x06
   
   // PUERTO C - RC5
   #bit TRISC_RC5=0x87.5
   #bit PORTC_RC5=0x07.5
   
// Programa principal
void main(){
// Configuracion de perifericos
   // Configuracion de las GPIOs
   TRISB=0x00;
   PORTB=0x00;
   
   TRISC_RC5=1;
   
   // BUCLE INFINITO
   while(1){
   if(PORTC_RC5==0)
   //if(bit_test(PORT,5)==0)
   //Podriamos utilizar esta funcion si hubiesemos declarado el registro PORTC
   {
   PORTB=0xFF;
   }
   else{
   PORTB=0x00;
   }
   }
}
   
   
   
