#include<stdio.h>
char* fun(void)
{
	char *str = "hello world";
	return str;
}
int main()
{
	char* p;
	p = fun();
	printf("p=%s\n", p);
	return 0;
}