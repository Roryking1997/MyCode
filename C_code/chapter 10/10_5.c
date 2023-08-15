#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	FILE* fp_read,*fp_write;
	char str[100];
	fp_read = fopen("src.txt", "r");
	if (fp_read == NULL)
	{
		perror("fopen");
		return 0;
	}
	fp_write = fopen("dest.txt", "w");
	if (fp_write == NULL)
	{
		perror("fopen");
		return 0;
	}
	fgets(str, 100, fp_read);
	printf("str=*%s*\n", str);
	//fputs(str, fp_write);
	return 0;
}