#include<stdio.h>
int main()
{
	int a[4][5];
	printf("a=%p\n", a);// int (*p)[5];
	printf("a+1=%p\n", a + 1);

	printf("&a =%p\n", &a); //int(*p)[4][5];
	printf("&a +1 =%p\n",&a +1);


	return 0;
}