#include<stdio.h>
#pragma warning(disable:4996)
enum week {
	mon,tue,wed,thu,fri,sat,sun
};
int main()
{
	enum week workday;
	workday = fri;
	printf("workday=%d\n", fri);
	//tue = 8;//����
	//workday = abc;//����ö��Ԫ����û��abc
	return 0;
}