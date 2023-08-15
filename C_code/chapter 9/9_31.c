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
	//tue = 8;//错误
	//workday = abc;//错误，枚举元素中没有abc
	return 0;
}