#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int rno;

        Student() {

        }
        Student(string n , int r , float m)
        {
            name = n;
            rno = r;
            marks = m;
        }

        void display()
        {
            cout<<"Roll No : "<<rno<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Marks : "<<marks<<endl;
        }

    private:
        float marks;
};

int main ()
{
    Student s1("Shyam" , 1626 , 82.3);
    s1.display();
}