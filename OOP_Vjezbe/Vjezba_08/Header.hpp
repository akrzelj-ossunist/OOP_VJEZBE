#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;
using std::ostream;

class timer {
	int hh, mm;
	double ss;
public:
	timer() { hh = 0; mm = 0; ss = 0; };
	timer(int h, int m, double s) : hh(h), mm(m), ss(s) {};

	timer operator+=(timer& obj) {
		hh += obj.hh; mm += obj.mm; ss += obj.ss;
		return *this;
	}

	timer operator/=(size_t num) {
		hh /= num; mm /= num; ss /= num;
		return *this;
	}
	timer operator-=(timer& obj) {
		hh -= obj.hh; mm -= obj.mm; ss -= obj.ss;
		return *this;
	}
	friend bool operator<(timer& obj, timer& obj1) {
		int s1 = obj1.hh * 3600 + obj1.mm * 60 + obj1.ss;
		int s = obj.hh * 3600 + obj.mm * 60 + obj.ss;
		return s1 > s;
	}

	friend ostream& operator<<(ostream& s, const timer& obj) {
		return s << obj.hh << ":" << obj.mm << ":" << obj.ss;	
	}

	operator double() const {
		double t = hh * 3600 + mm * 60 + ss;
		return t;
	}
	double gets() { return ss; }
	void sets(double ss1) { ss = ss1; }
};

class penalty {
	double m;
public:
	penalty(double num) :m(num) {};
	void operator()(timer& t)
	{
		double s = t.gets() + m;
		t.sets(s);
	}
};

#endif // !HEADER_H

