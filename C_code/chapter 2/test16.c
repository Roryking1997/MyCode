#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	if ((a < b) && (b > c))
	{
		printf("����Ϊ��\n");
	}

	if ((a > b) || (b > c))
	{
		printf("�߼���Ľ��Ϊ��\n");
	}

	if (!(a > b))
	{
		printf("�߼�����������\n");
	}

	return 0;
}