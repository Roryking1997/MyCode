#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	char a;
	char b;
	char c;
};
int main()
{
	struct stu boy;
	printf("sizeof(boy)=%d\n", sizeof(boy));

	return 0;
}