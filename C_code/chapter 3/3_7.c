#include<stdio.h>
int main()
{
	char c1[] = { 'c',' ','p','r','o','g' };
	char c2[] = "c prog";
	printf("sizeof(c1)=%d\n",sizeof(c1));
	printf("sizeof(c2)=%d\n", sizeof(c2));
	printf("%s\n",c2);
	return 0;
}