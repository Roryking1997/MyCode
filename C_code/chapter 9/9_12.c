#include<stdio.h>
#pragma warning(disable:4996)
typedef struct stu {
	int num;
	char name[20];
	float score;
}STU;
int  main()
{
	STU edu[3];
	printf("edu=%p\n", edu);//STU *
	printf("&edu[0]=%p\n", &edu[0]);//STU *
	printf("&(edu[0].num)=%p\n",&(edu[0].num));//int *
	return 0;
}