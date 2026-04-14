#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int rno;
        float cgpa;

    Student(string name , int rno , float cgpa)
    {
        this->name = name;
        this->rno = rno;
        this->cgpa = cgpa;
    }
};

int main ()
{
    Student s("Shyam Desale" , 1626 , 8.2);

    cout<<s.name<<"  "<<s.rno<<"  "<<s.cgpa<<endl;
}