//�������1~LENGTH�ַ�������n��,�ɲ������룻���浽�ļ� input.txt;�ɹ�����1����0��

#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define LENGTH 32

int randstr(long n)
{
	FILE *fp;
	char a[LENGTH];
	int l, err, i;
	srand((unsigned)time(NULL));
	err = fopen_s(&fp,"input.txt", "w");
	if (err != 0)
		return (err);
	for (long j = 0; j < n; j++)
	{
		l = 1 + rand() % (LENGTH-1);
		for (i = 0; i < l; i++)
			a[i] = 97 + rand() % 26;
		a[i] = '\0';
		fprintf(fp, "%s \n", a);		
	}
	fclose(fp);
}

