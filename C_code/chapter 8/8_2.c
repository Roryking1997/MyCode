#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	strcpy(str, "hello");
	printf("str=%s\n", str);
	printf("str+6=%s\n", str + 6);
	return 0;
}