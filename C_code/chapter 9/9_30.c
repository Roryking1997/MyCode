#include<stdio.h>
#pragma warning(disable:4996)
typedef union data {
	unsigned char a;
	unsigned int b;
}DATA;
int main()
{
	DATA temp;
	temp.b = 0xffffffff;
	printf("temp.b=%x\n", temp.b);
	printf("temp.a=%x\n", temp.a);
	temp.a = 0x55;
	printf("temp.b=%x\n", temp.b);
	printf("temp.a=%x\n", temp.a);
	printf("sizeof(temp)=%d\n", sizeof(temp));
	return 0;
}