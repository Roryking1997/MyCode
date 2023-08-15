#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	char a;
	int c;
	short int b;
};
int main()
{
	struct stu temp;
	printf("sizeof(temp)=%d\n", sizeof(temp));
	printf("&(temp.a)=%p\n", &(temp.a));
	printf("&(temp.c)=%p\n", &(temp.c));
	printf("&(temp.b)=%p\n", &(temp.b));
	


	return 0;
}