#include<iostream>
using namespace std;

class Cricketer
{
    public:
        string name;                                                                                                                                                                                
        int runs;
        float average;

    Cricketer(string name , int runs , float average)
    {
        this->name = name;
        this->runs = runs;
        this->average = average;
    }

    void print()
    {
        cout<<name<<" "<<runs<<" "<<average<<endl;
    }

    int matches()
    {
        return runs / average;
    }
};

int main ()
{
    Cricketer c1("Virat Kohili" , 25000 , 55.7);
    Cricketer c2("Rohit Sharma" , 18000 , 47.8);

    c1.print();
    c2.print();

    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
}