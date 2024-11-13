#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int a = 10;
    cout << " The Maximum limits of int " << numeric_limits<int>::max();
    cout << " The Minimum limits of int " << numeric_limits<int>::min();

    cout << " The Maximum limits of int " << numeric_limits<char>::max();
    cout << " The Minimum limits of int " << numeric_limits<char>::min();

    cout << " The Maximum limits of int " << numeric_limits<float>::max();
    cout << " The Minimum limits of int " << numeric_limits<float>::min();

    cout << " The Maximum limits of int " << numeric_limits<double>::max();
    cout << " The Minimum limits of int " << numeric_limits<double>::min();

    cout << " The Maximum limits of int " << numeric_limits<long>::max();
    cout << " The Minimum limits of int " << numeric_limits<long>::min();
}


// THIS IS THE OUTPUT OF LIMITS MIN AND MAX


//  The Maximum limits of int 2147483647
//  The Minimum limits of int -2147483648

//  The Maximum limits of Char 
//  The Minimum limits of Char �

//  The Maximum limits of float 3.40282e+38
//  The Minimum limits of float 1.17549e-38

//  The Maximum limits of double 1.79769e+308
//  The Minimum limits of double 2.22507e-308

//  The Maximum limits of long 9223372036854775807
//  The Minimum limits of long -9223372036854775808