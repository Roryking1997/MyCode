#include<stdio.h>
int main()
{
	int a = 0x1234abcd;
	int* p;
	p = &a;
	printf("&a =%p\n", &a);
	printf("p=%p\n", p);

	return 0;
}