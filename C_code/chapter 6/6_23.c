#include<stdio.h>
int main()
{
	int a[5] = { 0,1,2,3,4 };
	int* p;
	p = a;

	p = &a[3];
	printf("*p=%d\n",*p);

	//a = &a[3];
	return 0;
}