#include<iostream>
using namespace std;

class Crickter
{
    public:
        string name;
        int runs;
        int age;
        float average;

    Crickter(string name , int runs , int age , float average)
    {
        this->name = name;
        this->runs = runs;
        this->age = age;
        this->average = average;
    }
    void print()
    {
        cout<<name<<"  "<<runs<<"   "<<age<<"  "<<average<<endl;
    }
};

int main()
{
    Crickter c1 ("Virat Kholi" , 25000 , 35 , 55.2);
    Crickter c2 ("Rohit Sharma" , 18000 , 42 , 47.8);

    c1.print();
    c2.print();
}