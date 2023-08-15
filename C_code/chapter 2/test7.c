#include <stdio.h>
int main()
{
	unsigned int i;
	for (i = 0; i <= 255; i++)
	{
		printf("%d %c  ", i, i);
		if (i % 10 == 0)
			printf("\n");
	}
	return 0;
}