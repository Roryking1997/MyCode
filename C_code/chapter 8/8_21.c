#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[10];
	sscanf("abdwf345mnytUTadf", "%[a-z]", buf);
	printf("buf=%s\n", buf);
	sscanf("abd wf345mnytUTadf", "%[a-z]", buf);
	printf("buf=%s\n", buf);

	sscanf("aebfdwf345mnytUTadf", "%[a-f]", buf);
	printf("buf=%s\n", buf);

	return 0;
}