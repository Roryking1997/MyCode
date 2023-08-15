#include<stdio.h>
static void fun2(void);
void fun(void)
{
	printf("in fun\n");
	fun2();
}

static void fun2(void)
{
	printf("in fun2 \n");
}