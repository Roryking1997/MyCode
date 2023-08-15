#include<stdio.h>
void fun(void);
int num = 100;

int main()
{
	int num = 10;
	printf("in main fun  num =%d\n",num);
	fun();
	return 0;
}
void fun(void)
{
	printf("in fun num=%d\n",num);
}