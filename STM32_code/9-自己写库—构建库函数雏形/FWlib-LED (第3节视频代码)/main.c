
//#if 0

//#include <rge52.h>

//sbit LED  = P0^0

//void main(void)
//{
//	P0 = 0XFE;     // ���߲���  sfr P0   0X80
//	
//	LED = 0;       // λ����
//}

//#endif



#include "stm32f10x.h"
#include "stm32f10x_gpio.h"

int main (void)
{
#if 0	
	// �� GPIOC �˿ڵ�ʱ��
	*( unsigned int * )0x40021018 |=  ( (1) << 4 );
	
	// ����IO��Ϊ���
	*( unsigned int * )0x40011000 &=  ~( (0x0f) << (4*2) );
	*( unsigned int * )0x40011000 |=  ( (1) << (4*2) );
	
	// ���� ODR �Ĵ���
	*( unsigned int * )0x4001100c &= ~(1<<2);
	
#elif 0
	
	// �� GPIOC �˿ڵ�ʱ��
	RCC_APB2ENR  |=  ( (1) << 4 );
	
	// ����IO��Ϊ���
	GPIOC_CRL &=  ~( (0x0f) << (4*2) );
	GPIOC_CRL |=  ( (1) << (4*2) );
	
	// ���� ODR �Ĵ���
	GPIOC_ODR &= ~(1<<2);
	//GPIOC_ODR |= (1<<2);
	
	
#elif 0
		// �� GPIOB �˿ڵ�ʱ��
	RCC->APB2ENR  |=  ( (1) << 4 );
	
	// ����IO��Ϊ���
	GPIOC->CRL &=  ~( (0x0f) << (4*2) );
	GPIOC->CRL |=  ( (1) << (4*2) );
	
	GPIO_SetBits(GPIOC,GPIO_Pin_2);
	GPIO_ResetBits( GPIOC,GPIO_Pin_2 );

	
#elif 1

	GPIO_InitTypeDef  GPIO_InitStructure;
	
	// �� GPIOC �˿ڵ�ʱ��
	RCC->APB2ENR  |=  ( (1) << 4 );
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStructure);	

	GPIO_SetBits(GPIOC,GPIO_Pin_2);
	GPIO_ResetBits( GPIOC,GPIO_Pin_2 );
#endif
}


void SystemInit(void)
{
	// ������Ϊ�գ�Ŀ����Ϊ��ƭ��������������
}


// ʹ�ù̼���ķ�ʽ����ʣ�µ�����LED





