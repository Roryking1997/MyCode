#include<stdio.h>
#pragma warning(disable:4996)
unsigned int my_strlen(const char* s)
{
	const char* p=s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;
}
int main()
{
	int num;
	num = my_strlen("helloworld");
	printf("num=%d\n",num);
	return 0;
}