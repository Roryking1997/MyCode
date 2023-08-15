#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20];
	int num;
	sscanf("12345678", "%s", buf);
	printf("buf=%s\n", buf);

	sscanf("12345678", "%4s", buf);
	printf("buf=%s\n", buf);

	sscanf("12345678", "%3d", &num);
	printf("num=%d\n", num);

	return 0;
}