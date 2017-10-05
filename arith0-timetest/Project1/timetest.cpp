#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

//return ms

double timetest(long LONG)
{
	double time;
	cout << "timetest begin!" << endl;
	time_t begin = clock();
	for (long i = 0; i <= LONG; i++)
	{
		if (i == LONG / 4)
			cout << "25 %";
		else if (i == LONG / 2)
		{
			//printf("\r");
			cout << "\r" << "50 %";
		}
		else if (i == 3 * LONG / 4)
			cout << "\r" << "75 %";
		else if (i == LONG)
			cout << "\r" << "100%" << endl;
		for (long a = 0; a < LONG; a++);
	}
	time_t end = clock();
	cout << "OK!";
	time = end - begin;
	cout << endl << "time:" << time / 1000.0 << "s";
	return (time);


	

}