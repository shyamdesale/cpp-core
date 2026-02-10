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
    // Cricketer c2("Rohit Sharma" , 19000 , 48.7);

    Cricketer* p1 = &c1;
    cout<<(*p1).runs<<endl; // c1.runs;
    (*p1).avg = 77.3;
    cout<<(*p1).avg<<endl;
    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
}