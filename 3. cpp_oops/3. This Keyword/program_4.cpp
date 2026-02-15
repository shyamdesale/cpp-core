#include<iostream>
using namespace std;

class Car
{
    public:
        string name;
        int price;
        float average;
        string type;

    Car(string name , int price , float average , string type)
    {
        this->name = name;
        this->price = price;
        this->average = average;
        this->type = type;
    }
};

int main ()
{
    Car s("Toytoy Fortuner" , 4000000 , 9.3 , "Toytoy");

    cout<<s.name<<"  "<<s.price<<"  "<<s.average<<"  "<<s.type<<endl;
}