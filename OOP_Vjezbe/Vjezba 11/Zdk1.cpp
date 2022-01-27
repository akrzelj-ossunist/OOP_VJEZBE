/*Napisati funkciju koja iz datoteke numbers.txt čita prirodne brojeve. Koristeći standardne algoritme:
1. baci iznimku ako ne postoji datoteka,
2. napuni vektor brojevima iz datoteke,
3. prebroji sve brojeve vece od 500,
4. nađi minimalni i maximalni element,
5. iz vektora izbaci brojeve manje od 300,
6. preostale brojeve sortiraj silazno.
Za učitavanje iz datoteke i ispisivanje na konzolu koristite copy.*/

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

void print(vector<int> v) {
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;
}

void main() {
	fstream fp;
	fp.open("numbers.txt");
	if (!fp) {
		cout << "Unexistant file..." << endl;
		return;
	}
	vector<int> v;
	int number;
	while (fp >> number) 
		v.push_back(number);
	int check = 0;
	for (int i = 0; i < v.size(); i++)
		if (v[i] > 500)
			check += 1;
	cout << "Size: " << v.size() << endl;
	cout << "Numbers > 500: " << check << endl;
	int max = INT_MIN;
	int min = INT_MAX;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] > max)
			max = v[i];
		if (v[i] < min)
			min = v[i];
	}
	cout << "Min: " << min << " Max: " << max << endl;
	int len = v.size();
	for (int i = 0; i < len; i++) {
		if (v[i] < 300) {
			int tmp = v[len - 1];
			v[len - 1] = v[i];
			v[i] = tmp;
			v.pop_back();
			i--;
			len--;
		}
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	print(v);
}