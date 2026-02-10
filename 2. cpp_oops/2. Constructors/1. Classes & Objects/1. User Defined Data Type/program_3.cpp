#include<iostream>
using namespace std;

class Student   // Student is new data type
{
    public:
        string name;   // Student's name
        int rno;       // Roll number
        float cgpa;    // CGPA (grade)
};

int main ()
{
    Student s1;

    // Taking name input for first student using getline
    getline(cin , s1.name);

    // Taking roll number and CGPA for first student
    cin >> s1.rno;
    cin >> s1.cgpa;

    // This clears the newline left in the buffer after cin >>
    cin.ignore();

    Student s2;

    // Taking name input for second student
    getline(cin , s2.name);

    // Taking roll number and CGPA for second student
    cin >> s2.rno;
    cin >> s2.cgpa;

    // Printing details of both students
    cout << s1.name << "  " << s1.rno << "  " << s1.cgpa << endl;
    cout << s2.name << "  " << s2.rno << "  " << s2.cgpa << endl;
}