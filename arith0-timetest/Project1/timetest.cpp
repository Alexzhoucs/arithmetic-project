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
		cout << "\r" << 100 * i / LONG << "%";
		for (long a = 0; a < LONG; a++);
	}
	cout << "          ";
	time_t end = clock();
	cout << endl << "OK!";
	time = end - begin;
	cout << endl << "time:" << time / 1000.0 << "s";
	return (time);


	

}