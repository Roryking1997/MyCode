#include<stdio.h>
char* fun(void)
{
	static char str[100] = "hello world";
	return str;
}
int main()
{
	char* p;
	p = fun();
	printf("p=%s\n", p);
	return 0;
}