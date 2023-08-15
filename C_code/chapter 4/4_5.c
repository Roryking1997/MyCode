#include<stdio.h>
#include"fun2.h"
#include"4_5.h"
int num;
int main()
{
	printf("in main num =%d\n",num);
	num = 100;
	fun();
	fun2();
	return 0;
}
void fun(void)
{
	printf("in fun num=%d\n",num);
}