#include<stdio.h>
static int num;
void fun4(void)
{
	printf("num =%d\n",num);
	printf("in fun4 &num =%p\n", &num);
}