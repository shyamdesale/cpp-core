#include<iostream>
using namespace std;

class Ploat
{
    public:
        string area;
        int price;
        float sqft;

    Ploat(string a , int p , float s)
    {
        area = a;
        price = p;
        sqft = s;
    }
};

int main()
{
    Ploat s("Dk Chowk" , 3000 , 2050.2);

    cout<<s.area<<"  "<<s.price<<"  "<<s.sqft<<endl;
}