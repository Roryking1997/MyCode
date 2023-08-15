#include<stdio.h>
#pragma warning(disable:4996)
struct date {
	int year;
	int month;
	int day;
};
struct stu {
	int num;
	char name[20];
	char sex;
	struct date birthday;
};
int main()
{
	struct stu boy = {
	101,
	"lilei",
	'm'
	};
	boy.birthday.year = 2000;
	boy.birthday.month = 3;
	boy.birthday.day = 1;
	printf("%d %s %c\n",boy.num,boy.name,boy.sex);
	printf("%d %d %d\n", boy.birthday.year, boy.birthday.month, boy.birthday.day);
	return 0;
}