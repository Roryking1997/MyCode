#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	num = atoi("123");
	printf("num=%d\n", num);
	num = atoi("abcd");
	printf("num=%d\n", num);

	return 0;
}