#include "Triad.h"
#include <sstream>
#include <iostream> 

using namespace std;

Triad::Triad() : first(0), second(0), third(0)
{}

Triad::Triad(int first, int second, int third) {
	this->first = first;
	this->second = second;
	this->third = third;
}

Triad::Triad(const Triad& T) : first(T.first), second(T.second), third(T.third)
{}

Triad::~Triad(void)
{
}

Triad& Triad::operator = (const Triad& T) {
	this->first = T.first;
	this->second = T.second;
	this->third = T.third;

	return *this;
}

ostream& operator << (ostream& out, const Triad& c) {
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Triad& T) {
	int a, b, c;
	cout << endl;
	cout << "First : "; in >> a;
	cout << "Second : "; in >> b;
	cout << "Third : "; in >> c;

	T.setFirst(a);
	T.setSecond(b);
	T.setThird(c);

	return in;
}

Triad::operator string() const {
	stringstream ss;
	ss << endl;
	ss << first << endl;
	ss << second << endl;
	ss << third << endl;

	return ss.str();
}
