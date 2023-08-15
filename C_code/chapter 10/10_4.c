#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	FILE* fp1,*fp2;
	char ch;
	fp1 = fopen("test.txt", "r");
	if (fp1 == NULL)
	{
		perror("fopen");
		return 0;
	}
	fp2 = fopen("test2.txt", "w");
	if (fp2 == NULL)
	{
		perror("fopen");
		return 0;
	}

	while ((ch = fgetc(fp1)) != EOF)
	{
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}