// CONFIG
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config CP = OFF         // Code Protect (Code protection off)
#pragma config MCLRE = OFF      // Master Clear Enable (GP3/MCLR pin fuction is digital I/O, MCLR internally tied to VDD)

#define _XTAL_FREQ 4000000		//Should this be 64 MHz?
#include <xc.h>

void main(void) {
    TRIS = 0;
    while(1){
        GPIO = 1;
        __delay_ms(125);
        GPIO = 0;
        __delay_ms(62);

        GPIO = 1;
        __delay_ms(125);
        GPIO = 0;
        __delay_ms(62);

        GPIO = 1;
        __delay_ms(125);
        GPIO = 0;
        __delay_ms(62);

        __delay_ms(1000);
    }
    return;
}