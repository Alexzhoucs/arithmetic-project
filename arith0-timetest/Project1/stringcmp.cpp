// ���������ȣ���ĸ˳���֮��Ҫ�󣨲����ִ�Сд��;��������0/+-1

#include "LINK.h"

int stringcmp(string a,string b)
{
/*	int end;
	long la, lb;
	string *pa, *pb
	pa = &a;
	pb = &b;
	la = lb = 0;
	while (*pa != '\0')
	{
		la++;
		pa++;
	}
	while (*pb != '\0')
	{
		lb++;
		pb++;
	}
	if (la < lb)
		return(-1);
	else if (lb < la)
		return(1);
	else
		return(strcmp(a, b));*/
	if (a.length() < b.length())
		return (-1);
	else if (a.length() < b.length())
		return (1);
	else
	{
		if (a < b)
			return (-1);
		else if (a > b)
			return (1);
		else
			return (0);
	}
}

