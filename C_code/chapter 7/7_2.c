#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p;
	int i, n;
	printf("请输入您要申请的int数组的元素个数\n");
	scanf_s("%d", &n, 4);
	//p = (int*)malloc(n * 4);
	p = (int*)calloc(n,4);
	if (p == NULL)
	{
		printf("malloc err\n");
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		p[i] = i;
	}
	for (i = 0; i < n; i++)
	{
		printf("p[%d]=%d\n",i,p[i]);
	}
	free(p);

	return 0;
}