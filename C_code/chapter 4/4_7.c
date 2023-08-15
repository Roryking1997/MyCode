#include<stdio.h>
void fun(void);
int main()
{
	int num=100;
	
	{
		int a=20;
	}
	printf("a =%d\n",a);
	return 0;
}
/*
 void fun(void)
{
	printf("num =%d\n",num);
}
 */
