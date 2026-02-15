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
    cout<<"Enter a Name : ";
    getline(cin , s1.name);
    cout<<"Enter a Roll Number : ";
    cin>>s1.rno;
    cout<<"Enter a cgpa : ";
    cin>>s1.cgpa;

    cin.ignore();

    Student s2;
    cout<<"Enter a Name : ";
    getline(cin , s2.name);
    cout<<"Enter a Roll Number : ";
    cin>>s2.rno;
    cout<<"Enter a cgpa : ";
    cin>>s2.cgpa;

    cout<<s1.name<<"  "<<s1.rno<<"  "<<s1.cgpa<<endl;
    cout<<s2.name<<"  "<<s2.rno<<"  "<<s2.cgpa<<endl;
}