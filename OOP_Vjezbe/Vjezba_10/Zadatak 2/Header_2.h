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
		stack = new T[len];
	} 
	void pop() {
		if (len == 0)
			return;
		len -= 1;
		T* stack1 = new T[len];
		for (int i = 0; i < len; i++)
			stack1[i] = stack[i];
		delete[] stack;
		stack = new T[len];
		for (int i = 0; i < len; i++)
			stack[i] = stack1[i];
		delete[] stack1;
	};
	void push(T n) {
		len += 1;
		T* stack1 = new T[len];
		for (int i = 0; i < len; i++){
			if (i + 1 == len) {
				stack1[i] = n;
				return;
			}
			stack1[i] = stack[i];
		}
		stack = new T[len];
		for (int i = 0; i < len; i++)
			stack[i] = stack1[i];
		delete[] stack1;
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

#endif 

