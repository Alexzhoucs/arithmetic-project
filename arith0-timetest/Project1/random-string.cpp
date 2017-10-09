//产生随机1~LENGTH字符串；共n个,由参数传入；储存到文件 input.txt;成功返回0否则错误代码。

#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define LENGTH 32

int randstr(long n)
{
	FILE *fp;
	char a[LENGTH+1];			//多一位“\0”
	char name[20] = "input02-*.txt";
	int l, err, i;
	srand((unsigned)time(NULL));
	for (int j = 1; j <= 3; j++)
	{
		name[8] = j + 48;
		err = fopen_s(&fp, name, "w");
		if (err != 0)
			return (err);
		for (long j = 0; j < n; j++)
		{
			l = 1 + (rand() % (LENGTH));
			for (i = 0; i < l; i++)
				a[i] = 97 + rand() % 26;
			a[i] = '\0';
			fprintf(fp, "%s \n", a);
		}
		fclose(fp);
	}
	return(0);
}

