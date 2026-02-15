#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int rno;
        float avgmark;

    Student(string n , int r , float a)
    {
        name = n;
        rno = r;
        avgmark = a;
    }
};

int main ()
{
    Student s1("Shyam" , 2 , 8.2);
    Student* s2 = new Student("Raj" , 3 , 8.1);

    cout<<s1.name<<"  "<<s1.rno<<"  "<<s1.avgmark<<endl;
    cout<<(*s2).name<<"  "<<(*s2).rno<<"  "<<(*s2).avgmark<<endl;   // cout<<s2->name<<"  "<<s2->rno<<"  "<<s2->avgmark<<endl;
}