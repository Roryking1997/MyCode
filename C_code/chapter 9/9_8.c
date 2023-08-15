#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	int num;
	char name[20];
};
int main()
{
	struct stu boy = {101,"lilei"};
	struct stu* p;
	p = &boy;
	printf("sizeof(p)=%d\n",sizeof(p));
	printf("boy.num= %d\n", boy.num);
	printf("(*p).num=%d\n", (*p).num);
	printf("p->num=%d\n", p->num);

	return 0;
}