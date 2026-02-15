#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int rno;
        float cgpa;

    void print()
    {
        cout<<this->name<<"  "<<this->rno<<"  "<<this->cgpa<<endl;    // aagar me yaha this -> operator bhi use karu fir bhi same kam karega
    }
};

int main ()
{
    Student s1;
    s1.name = "Shyam";
    s1.rno = 1626;
    s1.cgpa = 8.2;

    Student s2;
    s2.name = "Ram";
    s2.rno = 1627;
    s2.cgpa = 7.4;

    s1.print();
    s2.print();
}