#include "Header.h"



void main() {
	Stack<int> S;
	S.push(5);
	S.push(4);
	S.pop();
	S.push(43);
	S.pop();
	int r = S.is_empty();
	if (r == 0)
		cout << "Empty" << endl;
	else
		cout << "Not empty... " << endl;
}

