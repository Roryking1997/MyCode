#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	char a;
	short int b;
	int c;
};
int main()
{
	struct stu temp;
	printf("sizeof(temp)=%d\n", sizeof(temp));
	printf("&(temp.a)=%p\n", &(temp.a));
	printf("&(temp.b)=%p\n", &(temp.b));
	printf("&(temp.c)=%p\n", &(temp.c));


	return 0;
}