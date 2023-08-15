#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	int num;
	char name[20];
	char sex;
};
struct stu2 {
	int num;
	int score;
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
	struct stu2 boy2;
	//boy2 = boy;//错误，boy和boy2的类型不相同，不能用等号赋值
	printf("boy2.num=%d\n", boy2.num);
	printf("boy2.name=%s\n", boy2.name);
	printf("boy2.sex=%c\n", boy2.sex);
	return 0;
}