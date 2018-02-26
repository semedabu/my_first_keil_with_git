#include "stm32l4xx.h"
#include "config_gpio.h"


void GPIOC_Pin_Set(uint8_t pinNumb)
	{
		GPIOC->ODR |=(1<<pinNumb);
	}
	
	void GPIOC_Pin_Clr(uint8_t pinNumb)
	{
		GPIOC->ODR &=~(1<<pinNumb);
	}

void Set_GPIOC_OutPut_No_Pu(uint8_t pin_numb)
{
	
	    GPIOC ->MODER   |=  (1<<pin_numb*2);                        //PC4 output mode
			GPIOC ->MODER   &= ~(1<<((pin_numb*2)+1)); 
			GPIOC ->OTYPER  &= ~(1<<pin_numb);                         //open drain on PC4
			GPIOC ->OSPEEDR |= (1<<pin_numb*2);                         //PC4 high speed
			GPIOC ->OSPEEDR |= (1<<((pin_numb*2)+1)); 
			GPIOC  ->PUPDR  &= ~(0<<pin_numb*2);
			GPIOC  ->PUPDR  &=  ~(0<<((pin_numb*2)+1));
}


void GPIOB_Pin_Set(uint8_t pinNumb)
	{
		GPIOB->ODR |=(1<<pinNumb);
	}
	
	void GPIOB_Pin_Clr(uint8_t pinNumb)
	{
		GPIOB->ODR &=~(1<<pinNumb);
	}


void Set_GPIOB_OutPut_No_Pu(uint8_t pin_numb)
{
	
	    GPIOB ->MODER   |=  (1<<pin_numb*2);                        //PC4 output mode
			GPIOB ->MODER   &= ~(1<<((pin_numb*2)+1)); 
			GPIOB ->OTYPER  &= ~(1<<pin_numb);                         //open drain on PC4
			GPIOB ->OSPEEDR |= (1<<pin_numb*2);                         //PC4 high speed
			GPIOB ->OSPEEDR |= (1<<((pin_numb*2)+1)); 
			GPIOB  ->PUPDR  &= ~(0<<pin_numb*2);
			GPIOB  ->PUPDR  &=  ~(0<<((pin_numb*2)+1));
}
