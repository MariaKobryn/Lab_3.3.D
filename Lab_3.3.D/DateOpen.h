#pragma once
#include <string>
#include "Triad.h"

using namespace std;
class DateOpen : public Triad
{
public:
	DateOpen();
	DateOpen(int, int, int);
	DateOpen(const DateOpen&);

	friend bool operator > (DateOpen&, DateOpen&);
	friend bool operator < (DateOpen&, DateOpen&);
};
