#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
#include "DateOpen.h"
#include "DateClosed.h"

using namespace std;

int main()
{
    DateOpen do_1, do_2;

    cin >> do_1;
    cout << do_1;

    cin >> do_2;
    cout << do_2;

    cout << "DO_1 > DO_2";
    if (do_1 > do_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "DO_1 < DO_2";
    if (do_1 < do_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    DateClosed dc_1, dc_2;

    cin >> dc_1;
    cout << dc_1;

    cin >> dc_2;
    cout << dc_2;

    cout << "DC_1 > DC_2";
    if (dc_1 > dc_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "DC_1 < DC_2";
    if (dc_1 < dc_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
