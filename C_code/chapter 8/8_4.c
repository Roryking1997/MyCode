#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char buf[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	int len,i;
	len = strlen(buf);
	strncpy(buf, "helloworld", 15);
	printf("buf=%s\n", buf);
	for (i = 0; i < len; i++)
	{
		printf("buf[%d]=%c\n",i,buf[i]);
	}
	return 0;
}