#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	int num;
	int age;
};
int main()
{
	struct stu boy;
	printf("sizeof(boy)=%d\n", sizeof(boy));

	return 0;
}