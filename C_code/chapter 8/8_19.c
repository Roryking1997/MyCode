#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20];
	int num;
	sscanf("1234 5678", "%*d %s", buf);
	printf("buf=%s\n", buf);
	sscanf("1234 5678", "%*s %d", &num);
	printf("num=%d\n", num);
	sscanf("1234 5678", "%*d %d", &num);
	printf("num=%d\n", num);

	sscanf("1234 5678", "%s", buf);
	printf("buf=%s\n",buf);


	return 0;
}