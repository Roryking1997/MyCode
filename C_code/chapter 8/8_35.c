#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char* str = "helloworldhelloworldhelloworld";
	int num = 0;
	char* p;
	char* q = str;
	while (  (p=strchr(q,'w')) !=NULL  )
	{
		num++;
		printf("第%d个w的位置: %d\n", num, p - str);
		q = p + 1;
	}
	printf("总共找到了%d个字符w\n", num);
	return 0;
}