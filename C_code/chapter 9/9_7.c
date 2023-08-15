#include<stdio.h>
#pragma warning(disable:4996)
typedef struct student {
	int num;
	char name[20];
	float score;
}STU;
int main()
{
	STU edu[3] = {
	{101,"Lucy",78},
	{102,"Bob",59.5},
	{103,"Tom",85}
	};
	float sum = 0;
	int i;
	for (i = 0; i < 3; i++)
	{
		sum = sum + edu[i].score;
	}
	printf("平均成绩为:%f\n", (float)(sum / 3));
	return 0;
}