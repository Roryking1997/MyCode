#include<stdio.h>
int main()
{
	int a[5];
	int* p, * q;
	p = &a[0];
	q = &a[3];
	printf("q-p=%d\n",q-p);
	printf("p = % p\n",p);
	printf("q = %p\n",q);

	return 0;
}