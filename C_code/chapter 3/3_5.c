#include<stdio.h>
int main()
{
	int a[2][3]={ 2,5,4,2,3,4 };
	int b[2][3] = { 3,5,6,8 };
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d]=%d ",i,j,a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("b[%d][%d]=%d ", i, j, b[i][j]);
		}
		printf("\n");
	}

	return 0;
}