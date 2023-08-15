#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str1[20] = "hello";
	char* str2 = "hello";
	printf("sizeof(str1)=%d\n", sizeof(str1));//20
	printf("sizeof(str2)=%d\n",sizeof(str2));//4

	printf("strlen(str1)=%d\n", strlen(str1));//5
	printf("strlen(str2)=%d\n",strlen(str2));//5
	return 0;
}
