#include<stdio.h>

//void fun(int(*p)[4], int x, int y)
void fun(int p[][4],int x,int y)
{
	int i, j;
	printf("p[1][2]=%d\n",p[1][2]);
	printf("sizeof(p)=%d\n",sizeof(p));
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,0,10,11}
	};
	fun(a,3,4);
	printf("a[0][1]=%d\n", a[0][1]);

	return 0;
}