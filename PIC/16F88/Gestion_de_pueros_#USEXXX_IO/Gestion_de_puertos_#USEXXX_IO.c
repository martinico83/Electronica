/*
Se pide crear el ejercicio 2.1 con las tres directivas #USE_XXX_IO en vez de con las directivas #BYTE.
Ademas, los LEDs iran al puerto C y el boton al pin 3 del puerto B. Activar las resistencias internas de PullUp del puerto B.
Simular el codigo y comprobar que funciona. Comparar que ocurre con los registros, en concreto el registro TRISB, debbugeando en MPLAB X IDE
cuando se usa una directiva STANDARD o una FAST.
*/

//Directivas
#include<16f88.h>
#fuses xt, nowdt
#use delay(internal=4M)

// #USE FAST_IO(PUERTO)
/*
#USE FAST_IO(A)
#USE FAST_IO(B)
*/

// #USE STANDARD_IO(PUERTO)
/*
#USE STANDARD_IO(A)
#USE STANDARD_IO(B)
  */

// #USE FIXED_IO(PUERTO_OUTPUTS=PIN_A0,....,PIN_A4)

#USE FIXED_IO(B_OUTPUTS=)
#USE FIXED_IO(A_OUTPUTS=PIN_A0,PIN_A1,PIN_A2,PIN_A3,PIN_A4,PIN_A6,PIN_A7)
/*  */

//Programa principal
void main (){
   //Configuración de periféricos
   // Configuracion de los GPIOs
  // SET_TRIS_A(0x00);   // Solo para FAST_IO, puerto A entradas
  // SET_TRIS_B(0xFF);   // Solo para FAST_IO, puerto B salidas
   
   port_b_pullups(true); // Activamos las resistencias de pullups de puerto B
   
   //Bucle infinito
   while(1){
   if(INPUT(PIN_B2)==0){
      OUTPUT_A(0xff);  // Pines a 1 para encender los LEDs
   }
   else{
      OUTPUT_A(0x00);  // Pines a 0 para apagar los LEDs
   }
   
   }
}
