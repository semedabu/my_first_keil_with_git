#include "stm32l4xx.h"
#include "config_gpio.h"

int main(void)
{
	
	    RCC->AHB2ENR    |=  RCC_AHB2ENR_GPIOBEN;
			RCC->AHB2ENR    |=  RCC_AHB2ENR_GPIOCEN;
		  RCC->AHB2ENR    |=  RCC_AHB2ENR_GPIOAEN;
		


  int i,pin_numb0=5;
	int pin_numb1=4;
    
	Set_GPIOC_OutPut_No_Pu(pin_numb0);
	Set_GPIOC_OutPut_No_Pu(pin_numb1);
	Set_GPIOB_OutPut_No_Pu(0);
	
	
	
	
	while(1)
	{
		GPIOB_Pin_Set(0);
		
		for(i=0;i<10000;i++);
		GPIOB_Pin_Clr(0);
		
		for(i=0;i<10000;i++);
		
	}
	
	
	return 0;
}
