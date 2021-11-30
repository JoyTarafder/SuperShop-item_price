#include <iostream>
/* There are two typy of header fils :
1. System header files : It comes with the compailer.
#include <iostream>
2. User defined header files : It is written by the programmer. 
#include "this.h" --> This will produce an error if this.h is no present in  the current directory.
*/
using namespace std;

int main()
{
    /* code */
    int a = 4, b = 5;
    cout << "Operators in C++ :"<< endl; // endl / "\n" --> new line 
    cout << "Following are the types of Operators in C++ "<< endl; 
    // Arithmetic operators  
    cout << "The value of a + b is : " << a+b<<endl;
    cout << "The value of a - b is : " << a-b<<endl;
    cout << "The value of a * b is : " << a*b<<endl;
    cout << "The value of a / b is : " << a/b<<endl;
    cout << "The value of a % b is : " << a%b<<endl;
    cout << "The value of a++ is : " << a++<<endl;
    cout << "The value of a-- is : " << a--<<endl;
    cout << "The value of ++a is : " << ++a<<endl;
    cout << "The value of --a is : " << --a<<endl;
    // Assignment operators --> used to assign values to variables
    //int c = 3, d = 9;
   // char e = 'e';

   // Comparison operators 
   cout << "Following are the types of comparison Operators in C++ "<< endl;
   cout << "The value of a == b is : " << (a==b) <<endl;
   cout << "The value of a != b is : " << (a!=b) <<endl;
   cout << "The value of a >= b is : " << (a>=b) <<endl;
   cout << "The value of a <= b is : " << (a<=b) <<endl;
   cout << "The value of a > b is : " << (a>b) <<endl;
   cout << "The value of a < b is : " << (a<b) <<endl;

   // Logical operators 
   cout << "Following are the types of logical Operators in C++ "<< endl;
   cout << "The value of this logical 'and operator' ((a==b) && (a>b)) is : " << ((a==b) && (a>b)) <<endl;
   cout << "The value of this logical 'or operator' ((a==b) || (a>b)) is : " << ((a==b) || (a>b)) <<endl;
   cout << "The value of this logical 'not operator' (!(a==b))) is : " << (!(a==b)) <<endl;

    return 0;
}
