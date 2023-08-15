#include<stdio.h>
#pragma warning(disable:4996)
//#pragma pack(2)
//#pragma pack(1)
#pragma pack(8)
struct stu {
	char a;
	int b;
};
int main()
{
	struct stu boy;
	printf("sizeof(boy)=%d\n", sizeof(boy));
	printf("&(boy.a)=%p\n", &(boy.a));
	printf("&(boy.b)=%p\n", &(boy.b));

	return 0;
}