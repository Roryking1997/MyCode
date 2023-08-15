#include<stdio.h>
//void fun(int* p)
void fun(int p[])
{
	printf("sizeof(p)=%d\n",sizeof(p));
	printf("p[2]=%d\n",p[2]);
	*(p + 3) = 100;
}
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	fun(a);
	printf("a[3]=%d\n",a[3]);
	return 0;
}