#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	char a : 9;//���� �ַ��͵�λ�β��ܴ���8λ
	char b : 7;
	char c : 2;
	int d : 30;
};
int main()
{
	struct stu data;
	printf("sizeof(data)=%d\n", sizeof(data));
	return 0;
}