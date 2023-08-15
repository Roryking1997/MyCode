#include<stdio.h>
#include"max.h"
#include"min.h"
int main()
{
	int num;
	num = max(10,20);
	printf("num =%d\n",num);
	num = min(10,20);
	printf("num =%d\n",num);
	return 0;
}
