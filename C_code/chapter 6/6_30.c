#include<stdio.h>
void fun(char** q)
{
	*q = "hello kitty";
}
int main()
{
	char* p = "hello world";
	fun(&p);
	printf("p=%s\n",p);
	return 0;
}