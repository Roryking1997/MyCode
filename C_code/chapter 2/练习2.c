#include<stdio.h>
int main()
{
	int year, month, day;
	int sum;
	printf("please input  year month day:\n");
	scanf_s("%d %d %d", &year, &month, &day);
	switch (month)
	{
	case 1:
		sum = day;
		break;
	case 2:
		sum = 31 + day;
		break;
	case 3:
		sum = 31 + 28 + day;
		break;
	case 4:
		sum = 31 + 28 + 31 + day;
		break;
	case 5:
		sum = 31 + 28 + 31+ 30 + day;
		break;
	case 6:
		sum = 31 + 28 + 31 + 30 + 31 + day;
		break;
	case 7:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + day;
		break;
	case 8:
		sum= 31 + 28 + 31 + 30 + 31 + 30 + 31 +day;
		break;
	case 9:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
		break;
	case 10:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
		break;
	case 11:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
		break;
	case 12:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
		break;
	default:
		sum = 0;
		printf("您输入的月份有误\n");
		break;
	}
	if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		sum = sum + 1;
	}
	printf("%d %d %d 是一年中的第 %d 天\n",year,month,day,sum);
	return 0;
}