#include <iostream>
#include <iomanip>

using namespace std;

void index(int* niz, int i, int &br, int len)
{
	for (int j = 0; j < len; j++)
		if (j + 1 == i)
			br = niz[j];
}
int main()
{

	int niz[] = { 5,3,2,8,4,2,5,7 };
	int i = 3,br;
	int len = sizeof(niz) / sizeof(int);
	index(niz, i,br,len);
	cout << br + 1;
}