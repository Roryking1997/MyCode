#include<stdio.h>
int main()
{
	int a = 0x12345678;
	int* p;
	int** q;
	int*** m;
	p = &a;
	printf("&a=%p\n", &a);
	printf("p=%p\n",p);

	q = &p;
	printf("&p=%p\n",&p);
	printf("q=%p\n",q);

	m = &q;
	printf("&q=%p\n",&q);
	printf("m=%p\n",m);

	printf("*p=%x\n",*p);
	printf("**q=%x\n",**q);
	printf("***m=%x\n",***m);
	
	return 0;
}