//#include <iostream>
//
//using namespace std;
//
//template<typename TYPE>
//void sort(TYPE *a) {
//	for (int i = 0; i < strlen(a); i++) {
//		for(int j = 0; j < strlen(a); j++)
//			if (a[i] < a[j]) {
//				TYPE c = a[i];
//				a[i] = a[j];
//				a[j] = c;
//			}
//	}
//}
//
//template<typename TYPE>
//void print(TYPE* a) {
//	for (int i = 0; i < strlen(a); i++) {
//		cout << a[i];
//	}
//}
//
//void main() {
//	char arr[] = "sdlfgkndfhkn";
//	sort<char>(arr);
//	print<char>(arr);
//
//}