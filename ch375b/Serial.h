#ifndef __SERIAL_H__
#define __SERIAL_H__

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#define BAUD 9600
#define BAUDRATE ((F_CPU)/(BAUD*16UL)-1)

void uart_init(void);
void uart_transmit (unsigned char data);
void uart_transmit_string(unsigned char *data);
unsigned char uart_recieve();
void convert_int_to_string(int int_value, unsigned char *int_to_ascii);
void
convert_float_to_string(float float_value, unsigned char *float_to_string);
#endif