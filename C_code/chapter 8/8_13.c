#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[100] = "helloworld";
	memset(str, '\0', 100);

	printf("str=%s\n", str);
	memset(str, 'a', 5);
	printf("str=%s\n", str);
	return 0;
}