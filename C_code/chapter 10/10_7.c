#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	FILE* fp1;
	long int len;
	char* str;
	fp1 = fopen("¼òµ¥°®.lrc", "rb");
	if (fp1 == NULL)
	{
		perror("fopen");
		return 0;
	}
	fseek(fp1, 0, SEEK_END);
	len = ftell(fp1);
	rewind(fp1);
	str = malloc(len + 1);
	if (str == NULL)
	{
		perror("malloc");
		return 0;
	}
	fread(str, len, 1, fp1);
	str[len] = '\0';
	printf("%s\n", str);


	fclose(fp1);
	free(str);
	return 0;
}