//  print n to 1

#include<iostream>
using namespace std;

void print (int x, int n)   // jr ithe 2 dabbe ghetle aahe tr khali pn don dabbech ghayche
{
    if(x > n) return;   // continue check n peksha less aahe ka
    cout<<x<<endl;
    print (x+1 , n);    // continue add hot rahil
}

int main ()
{
    int a;
    cout<<"Enter a Number : ";
    cin>>a;
    print (1 , a);
    return 0;
}