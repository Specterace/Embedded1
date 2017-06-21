/*
 * Lab1Project.c
 *
 * Created: 4/12/2017 12:22:57 AM
 * Author : Oscar Choy
 
 * Purpose: A program that enables the LED on the ATMega328P to turn off when the 
 * on-board button is pressed down, and stays on otherwise.
 */ 

#include <avr/io.h>

int main(void)
{
	DDRB |= 1<<DDB5;
    while (1) 
    {
		if((PINB & (1<<PINB7))) {
			PORTB &= ~(1<<PORTB5);
		}
		else {
			PORTB |= 1<<PORTB5;
		}
    }
	return 0;
}