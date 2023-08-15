#include<stdio.h>
int main()
{
	char a='x';
	int b = 101;
	float c = 3.14f;
	double d = 1.23;
	int e = 61;//48+13
	// 0 1 2 3 4 5 6 7 8 9 a b c d e f
	float f = 0.0123f;
	double g = 123456;
	char* p = "hello world";
	printf("a =%c\n",a);
	printf("b=%d\n",b);
	printf("c=%f\n",c);
	printf("d=%lf\n",d);
	printf("e=%x\n",e);
	printf("e=%d\n", e);
	printf("f=%e\n",f);
	printf("g=%e\n",g);
	printf("%s\n",p);

	printf("**%3d**\n",1);
	printf("**%-3d**\n", 1);
	printf("**%03d**\n", 1);
	printf("**%03d**\n",1234);
	printf("**%5.2f**\n",111113.1415926);
	
	return 0;
}