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

        float getMarks()
        {
            return marks;
        }

    private:
        float marks;
};

int main ()
{
    Student s1("Shyam" , 1626 , 82.3);
    cout<<s1.getMarks();
}