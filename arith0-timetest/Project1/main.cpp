#include "LINK.h"

#define TCTRL	99999
#define CI		2		//����Ԫ�ظ����Ĵ�����2���ݴΣ�

void main()
{
	/*
	timetest(TCTRL);
	cout << endl << "Press any key to exit!" << endl;
	getchar();
	*/

	/*
	int end;
	char a[20] = "dddc", b[20] = "dddc";
	end = stringcmp(a, b);
	cout << end;
	getchar();
	*/

	double time;
	long n = 1;
	int k = 0;
	for (int i = 0; i < CI; i++)
		n *= 2;

	cout << "clock begin!" << endl;
	time_t begin = clock();
	k = randstr(n);
	time_t end = clock();
	cout << endl << "OK!";
	time = end - begin;
	cout << endl << "time:" << time / 1000.0 << "s" << endl;

	if (k == 0)
		cout << "success!" << endl;
	else if (k > 0)
		cout << "cannot open the file 'input.txt'!" << endl << "ERROR  " << k;
	else
		cout << "ERROR!" << endl;
	cout << endl << "Press any key to exit!" << endl;
	getchar();

	


	
}

