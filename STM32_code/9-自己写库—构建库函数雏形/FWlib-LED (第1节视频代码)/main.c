
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

#elif 1
		// �� GPIOC �˿ڵ�ʱ��
	RCC_APB2ENR  |=  ( (1) << 4 );
	
	// ����IO��Ϊ���
	GPIOC->CRL &=  ~( (0x0f) << (4*2) );
	GPIOC->CRL |=  ( (1) << (4*2) );
	
	// ���� ODR �Ĵ���
	GPIOC->ODR &= ~(1<<2);
	//GPIOC->ODR |= (1<<2);
#endif
}


void SystemInit(void)
{
	// ������Ϊ�գ�Ŀ����Ϊ��ƭ��������������
}

// ��ҵ

// ʵ�� RCC �������� �Ĵ����ṹ����������ʱ����صĴ���ĳɼĴ����ṹ������ķ�ʽ






