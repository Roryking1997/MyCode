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
	//printf("��ͨ�ֲ����� a=%d\n",a);
	printf("��̬�ֲ����� b=%d\n",b);
}
int main()
{
	fun();
	fun();
	fun();
	fun2();
	return 0;
}