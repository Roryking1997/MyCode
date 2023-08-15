#include<stdio.h>
static int num;
void fun3(void);
extern fun4(void);
int main()
{
	printf("num =%d\n",num);
	num = 101;
	printf("in main &num =%p\n",&num);
	fun3();
	fun4();
	return 0;
}
void fun3(void)
{
	printf("num =%d\n",num);
	printf("in fun3 &num =%p\n", &num);
}