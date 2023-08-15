#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	char buf[10];
	int a;
};
int main()
{
	struct stu temp;
	printf("sizeof(temp)=%d\n", sizeof(temp));
	printf("temp.buf=%p\n", temp.buf);
	printf("&(temp.a)=%p\n", &(temp.a));
	



	return 0;
}