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
		printf("str1��ǰ5���ַ�����str2ǰ5���ַ�\n");
	else if (ret < 0)
		printf("str1��ǰ5���ַ�С��str2ǰ5���ַ�\n");
	else
		printf("str1ָ����ַ���ǰ5���ַ���str2ָ����ַ�����ǰ5���ַ����\n");
	return 0;
}