//返回0为成功

#include "link.h"

int randomInput(int n)
{
	int r;
	int err = 0;
	FILE *fp;
	char name[10] = "input.txt";
	srand((unsigned)time(NULL));
	err = fopen_s(&fp, name, "w");
	if (err != 0)
		return (err);
	for (int i = 0; i < n; i++)
	{
		r = rand();
		fprintf(fp, "%d  \n", r);
	}
	fclose(fp);
	return(0);
}