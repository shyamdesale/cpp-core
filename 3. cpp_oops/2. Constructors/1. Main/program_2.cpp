#include<iostream>
using namespace std;

class Car
{
    public:
        string name;
        int price;
        float average;
        string type;

    Car(string n , int p , float a , string t)
    {
        name = n;
        price = p;
        average = a;
        type = t;
    }
};

int main ()
{
    Car s("Toytoy Fortuner" , 4000000 , 9.3 , "Toytoy");

    cout<<s.name<<"  "<<s.price<<"  "<<s.average<<"  "<<s.type<<endl;
}