#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	char sex;
	int age;
};
int main()
{
	struct stu boy;
	printf("sizeof(boy)=%d\n", sizeof(boy));
	printf("&boy=%p\n", &boy);
	printf("&(boy.sex)=%p\n", &(boy.sex));
	printf("&(boy.age)=%p\n", &(boy.age));

	return 0;
}