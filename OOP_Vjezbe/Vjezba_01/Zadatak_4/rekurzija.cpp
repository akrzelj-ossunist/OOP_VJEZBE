/*4. Napisati rekurzivnu funkciju za traženje najvećeg i najmanjeg broja u nizu.*/


#include <iostream>
#include <iomanip>
int rek(int* niz, int max, int min, int i, int* j, int* k)
{
	if (i < 0)
	{
		*j = max;
		*k = min;
		return 0;
	}
	if (max < niz[i])
		max = niz[i];
	if (min > niz[i])
		min = niz[i];
	i--;
	return rek(niz, max, min, i, j, k);
}


int main()
{
	
	int niz[] = { 2,3,1,4,2,3,6 };
	int max = niz[0], min = niz[0],j,k,i=6;
	int a=rek(niz, max, min,i,&j,&k);
	std::cout << j << std::endl;
	std::cout << k << std::endl;