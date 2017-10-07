#include "LINK.h"

#define TCTRL	99999
#define CI		17		//控制元素个数的次数（2的幂次）

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

	long n = 1;
	int k = 0;
	for (int i = 0; i < CI; i++)
		n *= 2;
	k = randstr(n);
	if (k == 1)
		cout << "success!" << endl;
	else
		cout << "ERROR!" << endl;
	cout << endl << "Press any key to exit!" << endl;
	getchar();


	
}

