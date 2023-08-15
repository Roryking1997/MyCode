#include<stdio.h>
#pragma warning(disable:4996)
typedef struct stu {
	int num;
	char name[20];
	float score;
}STU;
int  main()
{
	STU boy;
	printf("&boy=%p\n", &boy);//STU *
	printf("&(boy.num)=%p\n", &(boy.num));//int *
	return 0;
}