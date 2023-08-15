#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str1[100]="dfjk$#$kjfdjkdf$#$fjkasdkf";
	char str2[100] = "$#$";
	char* p;
	p = strstr(str1, str2);
	if (p == NULL)
	{
		printf("没有您要查找的字符串\n");
		return 0;
	}
	printf("p-str1=%d\n", p - str1);
	return 0;
}