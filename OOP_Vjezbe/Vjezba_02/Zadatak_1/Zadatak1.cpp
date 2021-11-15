#include <iostream>
#include <iomanip>

using namespace std;

void minimax(int *niz,int &min,int &max,int len)
{
	for (int i = 0; i < len; i++)
	{
		if (niz[i] < min)
			min = niz[i];
		if (niz[i] > max)
			max = niz[i];
	}
}

int main()
{
	int niz[] = {5,3,2,8,4,2,5,7};
	int min=niz[0], max=niz[0];
	int len = sizeof(niz) / sizeof(int);
	minimax(niz, min, max,len);
	cout << "Minimalni u nizu je " << min << " a maksimalni je " << max;
}