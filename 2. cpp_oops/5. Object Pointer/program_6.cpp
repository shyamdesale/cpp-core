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
    void print()
    {
        cout<<name<<" "<<rno<<" "<<avgmark<<endl;
    }
};

int main ()
{
    Student s1("Shyam Desale" , 1626 , 8.7);

    Student* p1 = &s1;


    s1.print();
    p1->name = "Desale Shyam";
    p1->rno = 4;
    s1.print();
}