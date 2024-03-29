//Directivas
#include<16F88.h>
#fuses xt, nowdt
#use delay(internal=4000000)

#byte TRISA=0x85
#byte PORTA=0x05
#byte TRISB=0x86
#byte PORTB=0x06

//Programa principal
void main (){
   //Configuración de periféricos
   //Configuracion de las GPIOs
   TRISB=0x00; //Puesto B configurado como salida
   bit_set(TRISA,0);// RA0 configurado como entrada
   
   //int16 rotacion=1;
   PORTB=0x01; //Activar un led
   
   //Bucle infinito
   while(1){
   // Si RC0 es 1 no pulse el boton entonces roto a izquierda
   // Si RC0 es 0 entonces pulse el boton y roto a derecha
   if(bit_test(PORTA,0)==1){
   //Rotar a la izquierda
   /*
   PORTB=rotacion;
   rotacion=rotacion*2;
   if(rotacion==256)rotacion=1;
   */
   rotate_left (&PORTB, 1);

   }else{
   //Rotar a la derecha
   /*
   PORTB=rotacion;
   rotacion=rotacion/2;
   if(rotacion==0)rotacion=128;
   */
   rotate_right (&PORTB, 1);
   }
   delay_ms(200);
   }
}
