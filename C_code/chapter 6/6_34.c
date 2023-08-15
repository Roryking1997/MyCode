#include<stdio.h>
char* fun(void)
{
	char str[100] = "hello world";
	return str;//错误不能返回普通局部数组的地址，原因是fun执行完了，数组str内存被释放
}
int main()
{
	char* p;
	p = fun();
	printf("p=%s\n",p);
	return 0;
}