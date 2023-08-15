#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	char a;
	double b;
};
int main()
{
	struct stu temp;
	printf("sizeof(temp)=%d\n", sizeof(temp));
	printf("&(temp.a)=%p\n", &(temp.a));
	printf("&(temp.b)=%p\n", &(temp.b));
	return 0;
}