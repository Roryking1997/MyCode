#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[100] = "aa\0aaaaaaaaaaaaaaaaaa";
	char *src = "hello";
	strncat(str, src, 3);
	printf("str=%s\n", str);
	return 0;
}