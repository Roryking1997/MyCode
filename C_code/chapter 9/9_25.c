#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	unsigned int a : 2;
	unsigned int b : 6;
	unsigned int c : 4;
	unsigned int d : 4;
	unsigned int i;
};
int main()
{
	struct stu data;
	printf("sizeof(data)=%d\n", sizeof(data));
	printf("&data=%p\n", &data);
	printf("&(data.i)=%p\n", &(data.i));
	data.a = 2;//10
	printf("data.a=%u\n", data.a);
	data.a = 5;//101
	printf("data.a=%u\n", data.a);//01
	return 0;
}