// 数组a[] 个数n 均为int

#include "LINK.h"

int randomNumber(int n, int a[])
{
	int i;
	int c, sw = 1;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		do
		{
			c = rand() % 60;
			sw = 1;
			for (int j = 0; j < i; j++)
				if (c == a[j])
					sw = 0;
		} while (sw == 0);
		a[i] = c;		
	}
	for (; i < MAX + 1; i++)
		a[i] = 0;
	return (0);
}