#include<stdio.h>
#pragma warning(disable:4996)
int my_atoi(const char* str)
{
	int tmp=0;
	while (*str != '\0')
	{
		tmp = tmp * 10 + (*str - '0');
		str++;
	}
	return tmp;
}
int main()
{
	int num;
	num = my_atoi("1234");
	printf("num=%d\n", num);
	return 0;
}