#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char* str = "helloworldhelloworldhelloworld";
	char* p;
	p = strchr(str, 'w');
	if (p == NULL)
	{
		printf("û����Ҫ�ҵ��ַ�\n");
		return 0;
	}
	printf("p-str=%d\n",p-str);

	return 0;
}