#include<stdio.h>
#pragma warning(disable:4996)
typedef struct stu1 {
	int a;
	int b;
	int c;
}STU1;
typedef union stu2 {
	int a;
	int b;
	int c;
}STU2;
int main()
{
	STU1 tmp1;
	STU2 tmp2;
	printf("�ṹ�����tmp1��СΪ:%d\n", sizeof(tmp1));
	printf("���������tmp2��СΪ:%d\n", sizeof(tmp2));
	printf("&(tmp2.a)=%p\n", &(tmp2.a));
	printf("&(tmp2.b)=%p\n", &(tmp2.b));
	printf("&(tmp2.c)=%p\n", &(tmp2.c));
	printf("&tmp2=%p\n", &tmp2);

	return 0;
}