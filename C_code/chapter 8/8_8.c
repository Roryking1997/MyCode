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
		printf("str1ָ����ַ�������str2ָ����ַ���\n");
	else if (ret < 0)
		printf("str1ָ����ַ���С��str2ָ����ַ���\n");
	else
		printf("�����ַ������\n");
	return 0;
}