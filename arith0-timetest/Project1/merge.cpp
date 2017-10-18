//输入数组与排序起止下标，对数组进行排序，输出0为成功，1为失败。
//long begin, long end, long middle

#include "LINK.h"

int merge(string a[], long b, long e, long m)
{
	long i, j, k;
	long n1, n2;
	string l[QUANTITY], r[QUANTITY];
	n1 = m - b + 1;
	n2 = e - m;

	if (n1 < 0 || n2 < 0)			//检测报错
		return(1);

	for (i = 0; i < n1; i++)
		l[i] = a[b + i];
	for (i = 0; i < n2; i++)
		r[i] = a[m + i];
	l[n1] = r[n2] = "~";
	i = j = 0;
	for (k = b; k < e; k++)
	{
		if (stringcmp(l[i], r[j]) == -1)
			a[k] = l[i++];
		else
			a[k] = r[j++];
	}
	return(0);
}


int mergesort(string a[], long b,long e)
{
	int r1, r2, r3;
	long m = (b + e) / 2;
	if (b < e)
	{
		r1 = mergesort(a, b, m);
		r2 = mergesort(a, m + 1, e);
		r3 = merge(a, b, e, m);
	}
	if (r1 + r2 + r3)
		return(1);
	else
		return(0);
}