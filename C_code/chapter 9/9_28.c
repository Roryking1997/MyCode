#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	char a : 1;
	char b : 2;
	char : 0;
	char c : 3;
};
int main()
{
	struct stu data;
	printf("sizeof(data)=%d\n", sizeof(data));
	return 0;
}