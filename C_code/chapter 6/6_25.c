#include<stdio.h>
int main()
{
	int a[3][5];
	int(*p)[5];
	p = a;

	printf("a=%p\n",a);//a是数组的名字，是数组中第0个一维数组的首地址,是个一维数组指针。
	printf("a +1 =%p\n", a + 1);
	printf("*a =%p\n", *a);//*a是第0行第0列元素的地址，即&a[0][0]
	printf("*a +1=%p\n", *a + 1);//*a +1是&a[0][1]

	printf("p=%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("*p =%p\n",*p);
	printf("*p +1 =%p\n", *p +1);
	printf("&a[0][0]=%p\n", &a[0][0]);
	return 0;
}