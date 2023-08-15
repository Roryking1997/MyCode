#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20] = "helloworld";
	const char* str = buf;
	//strcpy(str, "hellokitty");
	*str = 'w';
	printf("buf=%s\n", buf);
	return 0;
}