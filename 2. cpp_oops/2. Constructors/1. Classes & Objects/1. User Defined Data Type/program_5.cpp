#include<iostream>
using namespace std;

class Car
{
    public:
        string name;
        int price;
        float seats;
        float average;
};

int main ()
{
    Car c1;
    cout<<"Enter a Car Name : ";
    getline(cin , c1.name);
    cout<<"Enter a Car Price : ";
    cin>>c1.price;
    cout<<"Enter a Seats : ";
    cin>>c1.seats;
    cout<<"Enter a Car Average : ";
    cin>>c1.average;

    cin.ignore();

    Car c2;
    cout<<"Enter a Car Name : ";
    getline(cin , c2.name);
    cout<<"Enter a Car Price : ";
    cin>>c2.price;
    cout<<"Enter a Seats : ";
    cin>>c2.seats;
    cout<<"Enter a Car Average : ";
    cin>>c2.average;

    cout<<c1.name<<"  "<<c1.price<<"  "<<c1.seats<<"  "<<c1.average<<endl;
    cout<<c2.name<<"  "<<c2.price<<"  "<<c2.seats<<"  "<<c2.average<<endl;
}