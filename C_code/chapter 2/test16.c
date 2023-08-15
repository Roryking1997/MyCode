#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	if ((a < b) && (b > c))
	{
		printf("条件为真\n");
	}

	if ((a > b) || (b > c))
	{
		printf("逻辑或的结果为真\n");
	}

	if (!(a > b))
	{
		printf("逻辑非条件成立\n");
	}

	return 0;
}