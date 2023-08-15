#include<stdio.h>
int main()
{
	int a = -8;
	unsigned int b = 7;
	if (a + b > 0)
	{
		printf("a+b >0\n");
	}
	else if (a + b < 0)
	{
		printf("a+b <0\n");
	}
	else
	{
		printf("a+b =0\n");
	}

	printf("a+b=%x\n",a+b);
	return 0;
}