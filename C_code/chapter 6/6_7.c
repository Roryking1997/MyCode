#include<stdio.h>
int main()
{
	char buf[5];
	char* q;
	q = buf;
	printf("q=%p\n",q);
	printf("q+2=%p\n", q + 2);
	return 0;
}