#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "Key.h"

uint8_t KeyNum;		//定于用于接收按键键码的变量

int main()
{
	LED_Init();		//LED初始化
	Key_Init();		//按键初始化
	while(1)
	{
		KeyNum = Key_GetNum();		//获取键码值
		if(KeyNum == 1)
		{
			LED1_Turn();			//LED1电平翻转
		} 
		if(KeyNum == 2)
		{
			LED2_Turn();			//LED2电平翻转
		}
	}
}
