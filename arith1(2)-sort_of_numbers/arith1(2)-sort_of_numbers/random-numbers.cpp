//�������1~LENGTH�ַ�������n��,�ɲ������룻���浽�ļ� input.txt;�ɹ�����0���������롣

#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

#define LENGTH 5

int randstr(long n)
{
	FILE *fp;
	int a = 0;		
	char name[20] = "input17-*.txt";
	int l, err, i, e = 10;
	srand((unsigned)time(NULL));
	for (int k = 1; k <= 3; k++)
	{
		name[8] = k + 48;
		err = fopen_s(&fp, name, "w");
		if (err != 0)
			return (err);
		for (long j = 0; j < n; j++)
		{
			
			if ((j * 100 / n) == e)//���������ʱ
			{
				e += 10;
				cout << "\r" << 100 * j / (3 * n) + (k - 1) * 33 << "%     ";
			}
			l = 1 + (rand() % (LENGTH));
			for (i = 0; i < l; i++)
				a = 10 * a + rand() % 10;
			if (a < 0)
				a = -a;
			a = a % 65535;
			fprintf(fp, "%d \n", a);

		}
		e = 10;
		fclose(fp);
	}
	cout << "\r" << "100%    " << endl;
	return(0);
}

