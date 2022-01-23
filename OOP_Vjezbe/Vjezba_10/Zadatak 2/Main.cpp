#include "Header.h"



void main() {
	Stack<int> S;
	S.push(5);
	S.push(4);
	S.pop();
	S.push(43);
	S.pop();
	if (!S.is_empty())
		cout << "Empty" << endl;
	else
		cout << "Not empty... " << endl;
}

