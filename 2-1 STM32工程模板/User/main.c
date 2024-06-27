#include "stm32f10x.h"                  // Device header

int main()
{ 
	GPIO_InitTypeDef GPIO_InitStruct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_13;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStruct);
	GPIO_SetBits(GPIOC, GPIO_Pin_13);	//设置高电平
	//GPIO_ResetBits(GPIOC, GPIO_Pin_13);	//设置低电平
	while(1)   
	{
		
	}
}