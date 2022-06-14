#include "DateOpen.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

DateOpen::DateOpen() : Triad()
{ }

DateOpen::DateOpen(int a, int b, int c) : Triad(a, b, c)
{ }

DateOpen::DateOpen(const DateOpen& d) : Triad(d)
{ }

bool operator > (DateOpen& d1, DateOpen& d2) {
	return (d1.getFirst() > d2.getFirst() || (d1.getFirst() == d2.getFirst() && d1.getSecond() > d1.getSecond())
		|| d1.getFirst() == d2.getFirst() && d1.getSecond() == d2.getSecond() && d1.getThird() > d2.getThird());
}
bool operator < (DateOpen& d1, DateOpen& d2) {
	return (d1.getFirst() < d2.getFirst() || (d1.getFirst() == d2.getFirst() && d1.getSecond() < d1.getSecond())
		|| d1.getFirst() == d2.getFirst() && d1.getSecond() == d2.getSecond() && d1.getThird() < d2.getThird());
}
