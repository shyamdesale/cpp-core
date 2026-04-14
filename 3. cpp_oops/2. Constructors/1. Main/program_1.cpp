#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int rno;
        float cgpa;

    Student(string s , int r , float c)     // constructor
    {
        name = s;
        rno = r;
        cgpa = c;
    }
};

int main ()
{
    Student s("Shyam Desale" , 1626 , 8.2); // paramatriside constructor

    cout<<s.name<<"  "<<s.rno<<"  "<<s.cgpa<<endl;
}