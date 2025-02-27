#include<stdint.h>

#define SYSCTL_RCGC2_R  (*(( volatile unsigned long*)0x400FE108))
#define GPIOA_PORTF_DIR_R     (*((volatile unsigned long *)0x40025400))
#define GPIOA_PORTF_DEN_R      ( *((volatile unsigned long *)0x4002551C))
#define GPIOA_PORTF_DATA_R      ( *((volatile unsigned long *)0x400253FC))

int main()
{
	volatile unsigned long delay_count;
	SYSCTL_RCGC2_R=0x20;
	//delay to make sure GPIOF is up and running
	for(delay_count=0; delay_count<2000; delay_count++);
	GPIOA_PORTF_DIR_R |=1<<3; //Dir is output for pin3 port F
	GPIOA_PORTF_DEN_R |=1<<3;
	while (1)
	{
		GPIOA_PORTF_DATA_R |=1<<3;
		for(delay_count=0; delay_count<2000; delay_count++);
		GPIOA_PORTF_DATA_R &= ~(1<<3);
		for(delay_count=0; delay_count<2000; delay_count++);
		
	}
	return 0;
	
}