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

void change(Student* s)
{
    (*s).avgmark = 7.9;     //s->avgmark = 7.9;
}

int main ()
{
    Student s1("Shyam Desale" , 1626 , 8.7);

    s1.print();

    change(&s1);

    s1.print();
}