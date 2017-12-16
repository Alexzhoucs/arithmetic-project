//nÎª¾ØÕó¸öÊı£»

#include "link.h"

int randomMatrix(int n)
{
	FILE *fp;
	int static p[MAX + 1];
	int err;
	char name[20] = "input.txt";
	err = fopen_s(&fp, name, "w");
	if (err != 0)
		return (err);
	for (int i = 0; i <= n; i++)
	{
		
	}
		if (err = fscanf_s(fp, "%d", &p[i]))
			cout << "error " << err << endl;
	for (int i = 0; i < n; i++)
	{
		 
	}
	
}