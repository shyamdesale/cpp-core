#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int rno;
        float cgpa;
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

    cout<<s1.name<<"  "<<s1.rno<<"  "<<s1.cgpa<<endl;
    cout<<s2.name<<"  "<<s2.rno<<"  "<<s2.cgpa<<endl;
}