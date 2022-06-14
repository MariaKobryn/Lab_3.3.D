#pragma once
#include <string>
#include <iostream>

using namespace std;

class Triad
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

	Triad();
	Triad(const int a, const int b, const int c);
	Triad(const Triad& T);
	~Triad(void);

	Triad& operator = (const Triad& T);

	operator string () const;

	friend ostream& operator << (ostream& out, const Triad& c);
	friend istream& operator >> (istream& in, Triad& c);

};
