#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int rno;
        float cgpa;
};

void print(Student s)
{
    cout<<s.name<<"  "<<s.rno<<"  "<<s.cgpa<<endl;  
}

void change(Student& s)
{
    s.name = "Ram";     // pass by refrence
}

int main ()
{
    Student s1;
    s1.name = "Shyam";
    s1.rno = 1626;
    s1.cgpa = 8.2;
 
    print(s1);
    change (s1);
    print(s1);
}