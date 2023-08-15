#include<stdio.h>
#pragma warning(disable:4996)
struct stu
{
	char name[10];
	int num;
	int age;
}boya[2], boyb[2];

int main()
{
	FILE* fp;
	int i;
	fp = fopen("test.txt", "wb+");
	if (fp == NULL)
	{
		perror("fopen");
		return 0;
	}
	for (i = 0; i < 2; i++)
	{
		printf("请输入第%d个结构体的 name num age\n", i);
		scanf("%s %d %d", boya[i].name, &(boya[i].num), &(boya[i].age));
	}
	fwrite(boya, sizeof(struct stu), 2, fp);
	rewind(fp);
	fread(boyb, sizeof(struct stu), 2, fp);
	printf("%s %d %d\n", boyb[0].name, boyb[0].num, boyb[0].age);
	printf("%s %d %d\n", boyb[1].name, boyb[1].num, boyb[1].age);
	fclose(fp);
	return 0;
}