#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20] = "helloworld";
	const char* const str = buf;
	printf("str=%s\n", str);
	//*str = 'w';
	//printf("str=%s\n", str);

	str = "hellokitty";

	return 0;
}