//�������1~LENGTH�ַ�������n��,�ɲ������룻���浽�ļ� input.txt;�ɹ�����0���������롣

#include "LINK.h"

int randstr(long n)
{
	FILE *fp;
	char a[LENGTH+1];			//��һλ��\0��
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
				a[i] = 97 + rand() % 26;
			a[i] = '\0';
			fprintf(fp, "%s \n", a);
		}
		e = 10;
		fclose(fp);
	}
	cout << "\r" << "100%    " << endl;
	return(0);
}

