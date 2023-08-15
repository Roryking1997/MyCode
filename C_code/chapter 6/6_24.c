#include<stdio.h>
int main()
{
	int a[5] = { 0,1,2,3,4 };
	int* p;
	p = a;

	printf("a=%p\n",a);
	printf("&a=%p\n",&a);//int(* )[5]
	printf("&a +1 =%p\n",&a+1);

	printf("&p=%p\n", &p);// int**
	printf("&p +1 =%p\n", &p + 1);

	return 0;
}