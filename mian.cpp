#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date d1( 12, 27, 2010 ); // December 27, 2010
    Date d2; // defaults to January 1, 1900
    cout << "d1 is " << d1 << "d2 is " << d2;
    d2.setDate(2,28,2008);
    cout << "d2 is " << d2;
    cout << "\n++d2 is " << ++d2 << " (leap year allows 29th)";
    Date d3(7,13,2010);
    cout << "\n Test the prefix increment operator:\n"
    << " d3 is " << d3
    << "++d3 is " << ++d3;

    cout << "\n Testing the postfix increment operator:\n"
    << " d3 is " << d3;
    cout << "d3++ is " << d3++;
    cout << " d3 is " << d3;
}
