#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char* str1 = "hello";
	char* str2 = "helloa";
	int ret;
	ret = strcmp(str1, str2);
	if (ret > 0)
		printf("str1指向的字符串大于str2指向的字符串\n");
	else if (ret < 0)
		printf("str1指向的字符串小于str2指向的字符串\n");
	else
		printf("两个字符串相等\n");
	return 0;
}