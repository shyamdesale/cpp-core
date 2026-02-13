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
    else if (cp > sp)
    {
        cout<<"Loss";
    }
    else
    {
        cout<<"No profit no loss";
    }
    return 0;
}