#include<stdio.h>
int main()
{
	int a[3][4];
	int b[][3] = {
		{1,2,3},
		{4,5},
		{7,8,9},
		{10,11,12},
		{13,14,15}
	};
	printf("sizeof(a)=%d\n",sizeof(a));//48
	printf("sizeof(b)=%d\n",sizeof(b));//60
	return 0;
}