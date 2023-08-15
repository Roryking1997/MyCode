#include<stdio.h>
//void fun(char** q, int x)
void fun(char *q[],int x)
{
	int i;
	printf("sizeof(q)=%d\n",sizeof(q));
	for (i = 0; i < x; i++)
	{
		printf("q[%d]=%s\n",i,q[i]);
	}
}
int main()
{
	char* p[3]={"hello","world","kitty"};//p[0] p[1] p[2]是 char*
	fun(p,3);//p 就是 &p[0]，是char**
	return 0;
}