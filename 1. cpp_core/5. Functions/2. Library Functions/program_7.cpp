/*    print the given pattern (Pascal Traingle)     */

#include<iostream>
using namespace std;
int fact (int x)
{
    int factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int nCr (int n , int r)
{
    int a = fact(n);    // n!
    int b = fact(r);    // r!
    int c = fact(n - r);    // (n - r)!
    return  a/(b*c);

}
int main ()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n-i-1; j++)
        {
            cout<<"  ";
        }
        
        for (int j = 0; j <= i; j++)
        {
            cout<<nCr(i,j)<<"   ";
        }
        cout<<endl;
    }
    return 0;
}