#include "LINK.h"

int main()
{
	node NIL;
	int a[10] = { 12,24,36,48,60 };
	int num[MAX + 1];
	for (int i = 0; i < 5; i++)
	{
		NIL.l = NIL.r = NIL.p = NULL;
		NIL.color = BLACK;
		if (randomNumber(a[i], num))
		{
			cout << "random error" << endl;
			return(1);
		}
		if (found(a[i], num, &NIL))
		{
			cout << "found error" << endl << "number" << i + 1 << endl;
			return(2);
		}


	}
	



	/*
	int n = 50;
	int a[MAX + 1];
	int err = 0;
	err = randomNumber(n, a);
	cout << err;
	getchar();
	*/

	// Ëæ»úÉú³É²âÊÔ




}