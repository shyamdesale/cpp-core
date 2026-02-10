#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int rno;
        float cgpa;

    Student(string s , int r , float c)
    {
        name = s;
        rno = r;
        cgpa = c;
    }
    Student(string s)
    {
        name = s;
    }
    Student(string s , float c)
    {
        name = s;
        cgpa = c;
    }

    Student()
    {
        
    }
};

int main ()
{
    Student s1("Shyam Desale" , 1626 , 7.6);

    Student s2("Shivam Desale");
    s2.rno = 1627;
    s2.cgpa = 8.4;
    
    Student s3("Parag Desale" , 8.5);
    s3.rno = 1628;

    Student s4;
    s4.name = "Amol Desale";
    s4.rno = 1629;
    s4.cgpa = 7.9;

    cout<<s1.name<<"  "<<s1.rno<<"  "<<s1.cgpa<<endl;
    cout<<s2.name<<"  "<<s2.rno<<"  "<<s2.cgpa<<endl;
    cout<<s3.name<<"  "<<s3.rno<<"  "<<s3.cgpa<<endl;
    cout<<s4.name<<"  "<<s4.rno<<"  "<<s4.cgpa<<endl;
}