#include<stdio.h>
int main()
{
	int num;
	int i = 3;
	num = (++i)+(++i)+(++i);
	printf("num =%d,i=%d\n",num,i);
	return 0;
}