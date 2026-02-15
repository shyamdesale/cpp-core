#include<iostream>
using namespace std;
class Car
{
    public:
        string name;
        int price;
        int maintecost;
        string type;

    Car(string n , int p , int m , string t)
    {
        name = n;
        price = p;
        maintecost = m;
        type = t;
    }
};
int main ()
{
    Car c1("Swift" , 1100000 , 5000 , "Sidan");
    
    Car c2 = c1;    // deep copy

    cout<<c1.name<<"  "<<c1.price<<"  "<<c1.maintecost<<"  "<<c1.type<<endl;
    cout<<c2.name<<"  "<<c2.price<<"  "<<c2.maintecost<<"  "<<c2.type<<endl;
}