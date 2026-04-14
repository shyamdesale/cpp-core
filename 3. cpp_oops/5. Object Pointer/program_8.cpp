#include<iostream>
using namespace std;

class Cricketer
{
    public:
        string name;
        int runs;
        float avg;

    Cricketer(string n , int r , float a)
    {
        name = n;
        runs = r;
        avg = a;
    }
};

int main ()
{
    Cricketer c1("Virat Kholi" , 25000 , 55.2);
    Cricketer* c2 = new Cricketer("Rohit Sharma" , 19000 , 48.7);

    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;

    cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;
}