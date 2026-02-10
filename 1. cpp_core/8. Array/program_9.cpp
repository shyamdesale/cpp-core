#include<iostream>
using namespace std;
void change(int x)
{
    x = 8;
}
int main ()
{
    int x = 3;
    cout<<x<<endl;
    change(x);  // pass by value
    cout<<x<<endl;
}