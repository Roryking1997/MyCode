#include<stdio.h>
int main()
{
	int n;
	printf("������һ��1~7����\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������n����������һ�� 1~7����\n");
		break;
	}

	return 0;
}