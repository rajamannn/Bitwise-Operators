//Program to print  the Bitwise Operators in C++

#include <iostream>
using namespace std;

int main()
{
  int a = 6, b = 4;
    cout << "a & b is " << (a & b) << endl;
    cout << "a | b is " << (a | b) << endl;
    cout << "a ^ b is " << (a ^ b) << endl;
    cout << "a<<1 is " << (a << 1) << endl;
    cout << "a>>1 is " << (a >> 1) << endl;
    cout << "~(a) is " << ~(a) << endl;

 return 0;
}
