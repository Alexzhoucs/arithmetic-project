//����������������ֹ�±꣬����������������0Ϊ�ɹ���1Ϊʧ�ܡ�
// long beging, long end, long middle

int merge(char a[], long b, long e, long m)
{
	long n1, n2;
	n1 = m - b + 1;
	n2 = e - m;


	return(0);
}


int mergesort(char a[], long b,long e)
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