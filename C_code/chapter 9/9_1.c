#include<stdio.h>
#pragma warning(disable:4996)
struct stu {
	int num;
	char name[20];
	char sex;
};

int main()
{
	struct stu boy = {
	100,
	"lilei",
	
	};
	struct stu lucy = {
	101,
	"lucy",
	'm'
	};

	return 0;
}