#include<stdio.h>
char* fun(void)
{
	char str[100] = "hello world";
	return str;//�����ܷ�����ͨ�ֲ�����ĵ�ַ��ԭ����funִ�����ˣ�����str�ڴ汻�ͷ�
}
int main()
{
	char* p;
	p = fun();
	printf("p=%s\n",p);
	return 0;
}