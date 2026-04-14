//  print n to 1 (without using extra parameters)

#include<iostream>
using namespace std;

void print(int n)
{
    if(n == 0)  return;     // base case
    print(n-1);     // call
    cout<<n<<endl;      // work
}

int main ()
{
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    print(x);
    return 0;
}