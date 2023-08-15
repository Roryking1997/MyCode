#include <stdio.h>
int main(int argc, char* argv[])
{
	int a[3][4] = { {1,2,3,4},{5,6},{5} };
	int b[3][4] = { 11,12,13,14,15,16,17,18,19 };
	int i, j;
	for (i = 0; i < 3; i++)//遍历所有行
	{
		for (j = 0; j < 4; j++)//遍历一行的所有列
		{
			printf("a[%d][%d]=%d   ", i, j, a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++)//遍历所有行
	{
		for (j = 0; j < 4; j++)//遍历一行的所有列
		{
			printf("b[%d][%d]=%d   ", i, j, b[i][j]);
		}
		printf("\n");
	}
	return 0;
}