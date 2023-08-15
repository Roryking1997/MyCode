#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[100] = "aa\0aaaaaaaaaaaaaaaaaa";
	char* src = "hello";
	strncat(str, src, 15);
	printf("str=%s\n", str);
	printf("str+8=%s\n", str+8);
	return 0;
}