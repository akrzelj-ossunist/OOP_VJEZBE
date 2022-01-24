#include <iostream>

using namespace std;



template<typename TYPE>
void sort(TYPE *a) {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {

			if (a[i] < a[j]) {
				TYPE c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
}

template<>
void sort<char>(char *a)
{
	for (int i = 0; i < strlen(a); i++) {
		for (int j = 0; j < strlen(a); j++) {

			if (islower(a[i]) < islower(a[j])) {
				char c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
}

template<typename TYPE>
void print(TYPE* a) {
	for (int i = 0; i < strlen(a); i++) {
		cout << a[i];
	}
}

template<typename TYPE>
void print(TYPE* a, int len) {
	for (int i = 0; i < len; i++) {
		cout << a[i];
	}
}

void main() {
	char arr[] = "aagrsdGgdhfresw ";
	int arr1[] = { 5, 6, 3, 2, 5, 7, 9 };
	sort<char>(arr);
	sort<int>(arr1);
	int a = strlen(arr);
	print<char>(arr, a);
	print<int>(arr1, 7);

}
