#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	FILE* fp1;
	char ch;
	fp1 = fopen("test.txt", "r");
	if (fp1 == NULL)
	{
		perror("fopen");
		return 0;
	}
	while ((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch, stdout);
	}
	fclose(fp1);
	return 0;
}