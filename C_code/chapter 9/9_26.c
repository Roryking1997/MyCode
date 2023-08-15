#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	char a : 7;
	char b : 7;
	char c : 2;
};
int main()
{
	struct stu data;
	printf("sizeof(data)=%d\n", sizeof(data));
	return 0;
}