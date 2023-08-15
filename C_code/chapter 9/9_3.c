#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	int num;
	char name[20];
	int score;
	char* addr;
};
int main()
{
	struct stu boy;
	printf("sizeof(boy)=%d\n", sizeof(boy));
	printf("sizeof(boy.num)=%d\n", sizeof(boy.num));
	printf("sizeof(boy.name)=%d\n", sizeof(boy.name));
	printf("sizeof(boy.score)=%d\n", sizeof(boy.score));
	printf("sizof(boy.addr)=%d\n", sizeof(boy.addr));
	return 0;
}