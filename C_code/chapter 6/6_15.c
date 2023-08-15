#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char* str;
	str = (char*)malloc(20);
	strcpy(str,"I love c!");
	printf("str=%s\n", str);
	*str = 'y';
	printf("str=%s\n", str);

}