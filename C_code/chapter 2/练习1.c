#include<stdio.h>
int main()
{
	int i;
	int a, b, c;
	for (i = 0; i <= 999; i++)
	{
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c)
		{
			printf("i =%d\n",i);
		}
	}
	return 0;
}


