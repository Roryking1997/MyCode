#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	FILE* fp1;
	int ret;
	fp1 = fopen(".\\test.txt", "w+");
	if (fp1 == NULL)
	{
		//printf("fopen ʧ��\n");
		perror("fopen");
		return 0;
	}
	printf("���ļ� test.txt�ɹ�\n");
	ret = fclose(fp1);
	if (ret == 0)
	{
		printf("�ر��ļ��ɹ�\n");
	}
	else
	{
		printf("�ر��ļ�ʧ��\n");
	}

	return 0;
}