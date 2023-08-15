#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[100] = "xiaoming:21,,,.ÄÐ.Å®,±±¾©:haidian";
	char *p[7];
	int i=0,j;
	printf("str=%s\n", str);
	p[i] = strtok(str, ":,.");
	printf("p[%d]=%s\n", i, p[i]);
	printf("str=%s\n", str);
	while (p[i] != NULL)
	{
		i++;
		p[i] = strtok(NULL, ":,.");
	}
	for (j = 0; j < i; j++)
	{
		printf("p[%d]=%s\n", j, p[j]);
	}
	printf("p[1]+3=%s\n", p[1] + 3);
	return 0;
}