#include "main.h"

void temp_delay(uint32_t delayTime)
{
	for(; 0 < delayTime; delayTime--)
	{
		
	}
}

int main()
{
	RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;
	
	GPIOC->CRH = 0;
	
	GPIOC->CRH |= GPIO_CRH_MODE8_1;	//Output mode, max speed 2 MHz.
	//GPIOC->CRH &= ~(GPIO_CRH_CNF8_0 | GPIO_CRH_CNF8_1);	
	
	GPIOC->CRH |= GPIO_CRH_MODE9_1 | GPIO_CRH_MODE9_0;
	//
	while(1)
	{
		LED1_ON();
		temp_delay(0xFFFFF);
		LED1_OFF(); 
		LED2_ON();
		temp_delay(0xFFFFF);
		LED2_OFF();
	}
	
	return 0;
}
