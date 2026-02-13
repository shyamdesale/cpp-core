//  print n to 1

#include<iostream>
using namespace std;

void print(int n)
{
    if(n == 0)  return;     // base case
    cout<<n<<endl;      // work
    print(n-1);     // call
}

int main ()
{
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    print(x);
    return 0;
}