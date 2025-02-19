#include "Uart.h"

unsigned char string_buffer[100]="learn-in-depth:Mostafa Mohammed";
unsigned char const string_buffer2[100]="learn-in-depth:Mostafa Mohammed";
void main(void)
{
	Uart_send_string(string_buffer);
}