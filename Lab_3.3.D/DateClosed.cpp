#include "DateClosed.h"
#include <sstream>
#include <iostream> 

using namespace std;

DateClosed::DateClosed() : first(0), second(0), third(0)
{}

DateClosed::DateClosed(int first, int second, int third) : first(first), second(second), third(third)
{}

DateClosed::DateClosed(const DateClosed& T) : first(T.first), second(T.second), third(T.third)
{}

DateClosed::~DateClosed(void)
{
}

bool operator > (DateClosed& d1, DateClosed& d2) {
	return (d1.getFirst() > d2.getFirst() || (d1.getFirst() == d2.getFirst() && d1.getSecond() > d1.getSecond())
		|| d1.getFirst() == d2.getFirst() && d1.getSecond() == d2.getSecond() && d1.getThird() > d2.getThird());
}
bool operator < (DateClosed& d1, DateClosed& d2) {
	return (d1.getFirst() < d2.getFirst() || (d1.getFirst() == d2.getFirst() && d1.getSecond() < d1.getSecond())
		|| d1.getFirst() == d2.getFirst() && d1.getSecond() == d2.getSecond() && d1.getThird() < d2.getThird());
}

DateClosed& DateClosed::operator = (const DateClosed& T) {
	this->first = T.first;
	this->second = T.second;
	this->third = T.third;

	return *this;
}

DateClosed::operator string() const
{
	stringstream ss;
	ss << endl;
	ss << first << endl;
	ss << second << endl;
	ss << third << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const DateClosed& c) {
	out << string(c);
	return out;
}

istream& operator >> (istream& in, DateClosed& T) {
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
