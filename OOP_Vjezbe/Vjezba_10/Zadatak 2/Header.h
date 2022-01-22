#ifndef HEADER_H
#define HEADER_H

#include <iostream>

using namespace std;

template<typename T>
class Stack {
	T* stack;
	T len;
public:
	Stack() {
		len = 0;
		stack = new T[100];
	} 
	void pop() {
		if (len == 0)
			return;
		len -= 1;
	};
	void push(T n) {
		len += 1;
		for (int i = 0; i < len; i++)
			if (i + 1 == len)
				stack[i] = n;
				return;
	}
	int is_empty() {
		if (len == 0)
			return 0;
	};
	~Stack() {
		for (int i = 0; i < len; i++)
			cout << stack[i] << ' ';
		delete[] stack;
	}
};

#endif // !HEADER_H

