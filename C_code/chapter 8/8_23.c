#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[10];
	sscanf("fdeo5609DtYfkadj", "%[^0oj]", buf);
	printf("buf=%s\n", buf);

	sscanf("fd eo5609DtYfkadj", "%[^0oj]", buf);
	printf("buf=%s\n", buf);

	return 0;
}