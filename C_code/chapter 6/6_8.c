#include<stdio.h>
int main()
{
	int a[10];
	int* p, * q;
	p = &a[1];
	q = &a[6];
	if (p < q)
	{
		printf("p<q\n");
	}
	else if (p > q)
	{
		printf("p>q\n");
	}
	else
	{
		printf("p==q\n");
	}
	return 0;
}