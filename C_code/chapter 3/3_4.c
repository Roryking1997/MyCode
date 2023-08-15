#include<stdio.h>
int main()
{
	int a[2][2] = { {1,2} ,{4,5} };
	int b[3][3] = {
		{1,2},
		{1},
	};
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%d][%d]=%d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("b[%d][%d]=%d ", i, j, b[i][j]);
		}
		printf("\n");
	}

	return 0;
}