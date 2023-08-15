#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[100] = "aa\0aaaaaaaaaaaaaaaaaaa";
	strcat(str, "hello");
	printf("str=%s\n", str);
	return 0;
}