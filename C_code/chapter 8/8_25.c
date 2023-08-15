#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20];
	sscanf("afj13#fjkads@jf53T", "%*[^#]#%[^@]", buf);
	printf("buf=%s\n", buf);
	return 0;
}