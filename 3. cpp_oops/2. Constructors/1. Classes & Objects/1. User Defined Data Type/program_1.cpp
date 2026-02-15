#include<iostream>
using namespace std;

class Student   // Student is new data type
{
    public: // access modifiers
        string name;
        int rno;
        float cgpa;
};

int main ()
{
    Student s;
    s.name = "Shyam Desale";
    s.rno = 1626;
    s.cgpa = 8.2;

    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    cout<<s.cgpa<<endl;
}