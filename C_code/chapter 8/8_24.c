#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20];
	sscanf("13TwcyzRrjfkk", "%[^a-f]", buf);
	printf("buf=%s\n", buf);

	sscanf("13 TwcyzRrjfkk", "%[^a-f]", buf);
	printf("buf=%s\n", buf);

	return 0;
}