#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20];
	sscanf("[ti:�򵥰�]", "%*[^:]%*c%[^]]", buf);
	printf("buf=%s\n", buf);
	return 0;
}