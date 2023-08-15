#include<stdio.h>
void fun(int(*p)[4][5])
{
}
int main()
{
	int a[3][4][5];
	printf("a=%p\n", a);
	printf("a+1=%p\n", a + 1);//a和a+1 地址编号相差80个字节
	//验证了a+1 跳一个4行5列的一个二维数组

	int(*p)[4][5];
	p = a;
	printf("p=%p\n", p);
	printf("p+1=%p\n", p + 1);//p和p+1 地址编号相差也80个字节
	return 0;
}