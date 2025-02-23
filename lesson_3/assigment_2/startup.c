
#include <stdint.h>
void Reset_Handler();

extern int main(void);
void Default_Handler()
{
	Reset_Handler();
}
void NMI_Handler()_attribute_ ((weak,alias("Default_Handler")));; 
void H_fault_Handler()_attribute_ ((weak,alias("Default_Handler")));;
void MM_fault_Hander()_attribute_ ((weak,alias("Default_Handler")));; 
void Bus_Handler()_attribute_ ((weak,alias("Default_Handler")));;
void Usage_falut_Handler()_attribute_ ((weak,alias("Default_Handler")));;


extern unsigned int _stack_top;
uint32_t vectors[] _attribute_((section(".vectors"))) = {
	(uint32_t) &_stack_top,
	(uint32_t) &Reset_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &H_fault_Handler,
	(uint32_t) &MM_fault_Hander,
	(uint32_t) &Bus_Handler,
	(uint32_t) &Usage_falut_Handler
};


extern unsigned int _E_TEXT;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_BSS;
extern unsigned int _E_BSS;
void Reset_Handler()
{
	unsigned int DATA_SIZE	= (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA;
	unsigned char* P_src= (unsigned char*)&_E_TEXT;
	unsigned char* P_det= (unsigned char)&_S_DATA;
	int i;

	for(i=0;i<DATA_SIZE;i++)
	{
      
      *((unsigned char*)P_det++)=*(unsigned char*)P_src++;

	}

	unsigned int BSS_SIZE=(unsigned char*)&_E_BSS - (unsigned char*)&_S_BSS;
	P_det=(unsigned char*)&_S_BSS;
	for(i=0;i<BSS_SIZE;i++)
	{
      
      *((unsigned char*)P_det++)=(unsigned char)0;

	}

    main();
}