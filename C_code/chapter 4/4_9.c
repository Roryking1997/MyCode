#include<stdio.h>
void fun(void)
{
	static int num = 3;
	num++;
	printf("num =%d\n", num);
}
void fun2(void)
{
	//int a;
	static int b;
	//printf("普通局部变量 a=%d\n",a);
	printf("静态局部变量 b=%d\n",b);
}
int main()
{
	fun();
	fun();
	fun();
	fun2();
	return 0;
}