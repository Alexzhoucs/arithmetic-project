//�������1~LENGTH�ַ�������n��,�ɲ������룻���浽�ļ� input.txt;�ɹ�����0���������롣

#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

#define LENGTH 32

int randstr(long n)
{
	FILE *fp;
	char a[LENGTH+1];			//��һλ��\0��
	char name[20] = "input17-*.txt";
	int l, err, i;
	srand((unsigned)time(NULL));
	for (int k = 1; k <= 3; k++)
	{
		name[8] = k + 48;
		err = fopen_s(&fp, name, "w");
		if (err != 0)
			return (err);
		for (long j = 0; j < n; j++)
		{
			//cout << "\r" << 100 * j * k / (3 * n) << "%     ";
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

