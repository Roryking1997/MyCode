#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20];
	sscanf("ad0a5Ffk780ad9fFafjdk","%[a0d5F]",buf);
	printf("buf=%s\n", buf);

	sscanf("ad0 a5Ffk780ad9fFafjdk", "%[a0d5F]", buf);
	printf("buf=%s\n", buf);

	return 0;
}