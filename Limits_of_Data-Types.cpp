#include <iostream>
#include <limits>
using namespace std;
int main()
{
    cout << " The Maximum limits of int " << numeric_limits<int>::max()<<endl;
    cout << " The Minimum limits of int " << numeric_limits<int>::min()<<endl;

    cout << " The Maximum limits of char " << numeric_limits<char>::max()<<endl;
    cout << " The Minimum limits of char " << numeric_limits<char>::min()<<endl;

    cout << " The Maximum limits of float " << numeric_limits<float>::max()<<endl;
    cout << " The Minimum limits of  float " << numeric_limits<float>::min()<<endl;

    cout << " The Maximum limits of double " << numeric_limits<double>::max()<<endl;
    cout << " The Minimum limits of double " << numeric_limits<double>::min()<<endl;

    cout << " The Maximum limits of long " << numeric_limits<long>::max()<<endl;
    cout << " The Minimum limits of long " << numeric_limits<long>::min()<<endl;
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

