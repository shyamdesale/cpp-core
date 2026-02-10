#include<iostream>
using namespace std;
int main ()
{
    int x;
    x = 5;
    int y;
    y = 2;
    int a = x % y;
    cout<<"Remainder is : "<<a;

    //This is because when 5 is divided by 2, the quotient is 2 and the remainder is 1.
        // Some important points :
        // 1) a % b = a (if a < b)
        // 2) a % a = 0
        // 3) a % (-b) = a % b
        // 4) (-a) % b = - (a % b)

        // 5) The % operator only works with integer operands in C++.
        //     ❌ You cannot use % with floating-point numbers like float or double.
        //     10.5 % 3.2;   // ❌ Error!
}