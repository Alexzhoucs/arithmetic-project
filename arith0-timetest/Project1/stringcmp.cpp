// 按长短优先；字母顺序次之的要求（不区分大小写）;返回整形0/+-1

#include <string.h>

int stringcmp(char a[],char b[])
{
	int end;
	long la, lb;
	char *pa, *pb;
	pa = a;
	pb = b;
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
		return(strcmp(a, b));
}

