#include<16f88.h>
#fuses xt, nowdt
#use delay(clock=4M)

#byte TRISB=0x87
#byte PORTB=0x07


void main() {
    
    TRISC=0x00;
    PORTC=0x00;
    
    while(1){
        PORTB=0b11111111;
        delay_ms(1000);
        PORTB=0b00000000;
        delay_ms(1000);
    }
}

