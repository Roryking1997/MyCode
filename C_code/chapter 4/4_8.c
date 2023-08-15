#include<stdio.h>
void fun(void)
{
	int num=3;
	num++;
	printf("num =%d\n",num);
}
void fun2(int x)
{
	x++;
	printf("x=%d\n",x);
}
int main()
{
	fun();
	fun();
	fun();
	fun2(3);
	return 0;
}