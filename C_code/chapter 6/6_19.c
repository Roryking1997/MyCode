#include<stdio.h>
void fun(int(*p)[4][5])
{
}
int main()
{
	int a[3][4][5];
	printf("a=%p\n", a);
	printf("a+1=%p\n", a + 1);//a��a+1 ��ַ������80���ֽ�
	//��֤��a+1 ��һ��4��5�е�һ����ά����

	int(*p)[4][5];
	p = a;
	printf("p=%p\n", p);
	printf("p+1=%p\n", p + 1);//p��p+1 ��ַ������Ҳ80���ֽ�
	return 0;
}