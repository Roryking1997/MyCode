#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
struct stu {
	int num;
	char name[20];
	char* addr;
	char sex;
};
int main()
{
	struct stu bob;
	bob.num = 100;
	printf("bob.num=%d\n", bob.num);
	//bob.name = "bob";//����,��Ϊbob.name�Ǹ���������֣��Ǹ�����
	strcpy(bob.name, "bob");
	printf("bob.name=%s\n", bob.name);
	//strcpy(bob.addr, "beijing");//����bob.addr�Ǹ�Ұָ��
	//printf("%s\n", bob.addr);
	bob.addr = "beijing";
	printf("bob.addr=%s\n", bob.addr);
	return 0;
}