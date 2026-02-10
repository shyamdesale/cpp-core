#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"Enter a Cost Price : ";
    cin>>cp;
    int sp;
    cout<<"Enter a Selling Price : ";
    cin>>sp;
    if (sp > cp)
    {
        cout<<"Profit";
    }
    if (cp > sp)
    {
        cout<<"Loss";
    }
    if (cp == sp)
    {
        cout<<"No profit no loss";
    }
    
}