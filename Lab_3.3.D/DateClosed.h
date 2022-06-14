#pragma once
#include <string>
#include <iostream>
#include "Triad.h"

using namespace std;
class DateClosed : private Triad
{
private:
	int first, second, third;
public:
	int getFirst() const { return first; }
	int getSecond() const { return second; }
	int getThird() const { return third; }

	void setFirst(int a) { this->first = a; }
	void setSecond(int b) { this->second = b; }
	void setThird(int c) { this->third = c; }

	DateClosed();
	DateClosed(const int a, const int b, const int c);
	DateClosed(const DateClosed& T);
	~DateClosed(void);

	DateClosed& operator = (const DateClosed& T);

	friend bool operator > (DateClosed&, DateClosed&);
	friend bool operator < (DateClosed&, DateClosed&);

	friend ostream& operator << (ostream& out, const DateClosed& c);
	friend istream& operator >> (istream& in, DateClosed& c);
	operator string () const;
};
