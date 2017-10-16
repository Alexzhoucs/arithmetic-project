#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <string.h>

#define LENGTH 32
#define TCTRL	99999
#define CI		17		//控制元素个数的次数（2的幂次）

using namespace std;

double timetest(long);
int stringcmp(string a, string b);
int randstr(long);
