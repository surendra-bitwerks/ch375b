/*
 * ch375b.c
 *
 * Created: 07-04-2020 09:42:28
 * Author : SRIJANA
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "Serial.h"

int main(void)
{
	uart_init();
	uart_transmit_string("Device Reset...\r\n");
    /* Replace with your application code */
    while (1) 
    {
		_delay_ms(1000);
    }
}



