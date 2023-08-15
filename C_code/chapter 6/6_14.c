#include<stdio.h>
int main()
{
	char* str = "I love C!";
	printf("str=%s\n",str);
	
	*str = 'y';
	printf("str=%s\n",str);
	return 0;
}