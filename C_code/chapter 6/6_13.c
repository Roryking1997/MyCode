#include<stdio.h>
int main()
{
	char str[100] = "I love C!";
	printf("str=%s\n",str);
	str[0] = 'y';
	printf("str=%s\n",str);
	return 0;
}