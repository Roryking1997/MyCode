#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* fun(void)
{
	char* str;
	str = (char*)malloc(100);
	strcpy_s(str,100, "hello world");
	
	return str;
}
int main()
{
	char* p;
	p = fun();
	printf("p=%s\n", p);
	free(p);
	return 0;
}