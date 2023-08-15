#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	FILE* fp1;
	int ret;
	fp1 = fopen(".\\test.txt", "w+");
	if (fp1 == NULL)
	{
		//printf("fopen 失败\n");
		perror("fopen");
		return 0;
	}
	printf("打开文件 test.txt成功\n");
	ret = fclose(fp1);
	if (ret == 0)
	{
		printf("关闭文件成功\n");
	}
	else
	{
		printf("关闭文件失败\n");
	}

	return 0;
}