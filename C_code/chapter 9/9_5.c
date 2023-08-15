#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	int num;
	char name[20];
	char sex;
};
int main()
{
	struct stu boy = {
		101,
		"lilei",
		'm'
	};
	struct stu boy2;
	boy2 = boy;
	printf("boy2.num=%d\n", boy2.num);
	printf("boy2.name=%s\n", boy2.name);
	printf("boy2.sex=%c\n", boy2.sex);
	return 0;
}