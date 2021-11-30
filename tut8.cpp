#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //int a = 34;
    //cout << a;
    //a = 23; //change the value
    // Constants in C++
    //const int b = 25;
    //b = 4; //you will get an error because b is a constant.
    //cout << "The value of a is: " << b;
    // //Manipulation in C++
    // int c = 2, x = 44, y = 1786;
    // cout << "The value of c is : " << setw(4) << c << endl;
    // cout << "The value of x is : " << setw(4) << x << endl;
    // cout << "The value of y is : " << setw(4) << y << endl;

    // cout << "The value of c is (Without setw) : " << c << endl;
    // cout << "The value of x is (Without setw) : " << x << endl;
    // cout << "The value of y is (Without setw) : " << y << endl;

    //Operator Precedence
    int a, b = 0, c = 0;
    cin >> b >> c;
    a = b * 5 + c;
    cout << a;
    return 0;
}
