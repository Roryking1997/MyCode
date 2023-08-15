#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	char a : 9;//错误 字符型的位段不能大于8位
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