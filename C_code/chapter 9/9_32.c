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
	workday = 100;//��Ȼ���ԣ����Ǿ�����Ҫ��ô������һ�㶼��ö��Ԫ�ظ�ö�ٱ�����ֵ��
	printf("workday=%d\n", workday);
	return 0;
}