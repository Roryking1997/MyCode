#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char* str = "helloworldhelloworldhelloworld";
	int num = 0;
	char* p;
	char* q = str;
	while (  (p=strchr(q,'w')) !=NULL  )
	{
		num++;
		printf("��%d��w��λ��: %d\n", num, p - str);
		q = p + 1;
	}
	printf("�ܹ��ҵ���%d���ַ�w\n", num);
	return 0;
}