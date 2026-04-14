#include<iostream>
using namespace std;

class Cricketer
{
    public:
    string name;
    int age;
    float avg;

    Cricketer(string name , int age , float avg)
    {
        this->name = name;
        this->age = age;
        this->avg = avg;
    }

    void print()
    {
        cout<<name<<" "<<age<<" "<<avg<<endl;
    }
};

void change(Cricketer* c)
{
    (*c).age = 40;       // c->age = 40;
}

int main()
{
    Cricketer c1("Rohit Sharma" , 35 , 48.4);
    Cricketer c2("Virat Kholi" , 32 , 57.8);

    c1.print();
    change(&c1);
    c1.print();
    c2.print();
}