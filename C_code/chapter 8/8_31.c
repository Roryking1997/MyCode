#include<stdio.h>
#pragma warning(disable:4996)
char* my_strcpy(char* dest, const char* src)
{
	char* p1 = dest;
	const char* p2 = src;
	while (*p2!='\0')
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';
	return dest;
}
int main()
{
	char buf[100];
	my_strcpy(buf, "hello world");
	printf("buf=%s\n", buf);
	return 0;
}