#include<stdio.h>
void fun(int (*p)[5],int x,int y)
{
	p[1][2]=100;
}
int main()
{
	int a[3][5]={
		{1,2,3,4,5},
		{6,7,8,9,0},
		{11,12,13,14,15}
	};
	printf("a[1][2]=%d\n", a[1][2]);
	fun(a, 3, 5);
	printf("a[1][2]=%d\n", a[1][2]);

	return 0;
}