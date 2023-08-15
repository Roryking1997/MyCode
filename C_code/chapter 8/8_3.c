#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char buf[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	strncpy(buf, "helloworld", 5);
	printf("buf=%s\n", buf);
	return 0;
}