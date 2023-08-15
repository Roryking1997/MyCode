#include<stdio.h>
#include"max.h"
#include"min.h"
int main()
{
	int  num;
	num = max(3, 7);
	printf("num=%d\n",num);

	num = min(8, 4);
	printf("num=%d\n",num);
	return 0;
}