#include<stdio.h>
int main()
{
	int a[3][5];
	int(*p)[5];
	p = a;

	printf("a=%p\n",a);//a����������֣��������е�0��һά������׵�ַ,�Ǹ�һά����ָ�롣
	printf("a +1 =%p\n", a + 1);
	printf("*a =%p\n", *a);//*a�ǵ�0�е�0��Ԫ�صĵ�ַ����&a[0][0]
	printf("*a +1=%p\n", *a + 1);//*a +1��&a[0][1]

	printf("p=%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("*p =%p\n",*p);
	printf("*p +1 =%p\n", *p +1);
	printf("&a[0][0]=%p\n", &a[0][0]);
	return 0;
}