#include<stdio.h>
#pragma warning(disable:4996)
enum week {
	mon=3, tue, wed, thu, fri=4, sat, sun
};
int main()
{
	enum week workday;
	printf("mon=%d\n",mon);
	printf("tue=%d\n", tue);
	printf("wed=%d\n", wed);
	printf("thu=%d\n",thu);
	printf("fri=%d\n", fri);
	printf("sat=%d\n", sat);
	printf("sun=%d\n", sun);
	workday = 100;//虽然可以，但是尽量不要这么操作，一般都用枚举元素给枚举变量赋值。
	printf("workday=%d\n", workday);
	return 0;
}