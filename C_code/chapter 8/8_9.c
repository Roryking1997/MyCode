#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char* str1 = "hello world";
	char* str2 = "hello kitty";
	int ret;
	ret = strncmp(str1, str2, 5);
	if (ret > 0)
		printf("str1的前5个字符大于str2前5个字符\n");
	else if (ret < 0)
		printf("str1的前5个字符小于str2前5个字符\n");
	else
		printf("str1指向的字符串前5个字符和str2指向的字符串的前5个字符相等\n");
	return 0;
}