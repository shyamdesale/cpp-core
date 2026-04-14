#include<iostream>
using namespace std;

// Class representing a student
class Student
{
public:
    string name;
    int rno;
    float cgpa;

    // Constructor: initializes name, roll number, and CGPA
    Student(string s, int r, float c)
    {
        name = s;
        rno = r;
        cgpa = c;
    }

    // Constructor: initializes only name
    Student(string s)
    {
        name = s;
    }

    // Constructor: initializes name and CGPA
    Student(string s, float c)
    {
        name = s;
        cgpa = c;
    }

    // Default constructor
    Student()
    {
        
    }
};

int main ()
{
    // Using full parameter constructor
    Student s1("Shyam Desale", 1626, 7.6);

    // Using single-parameter constructor and setting remaining fields manually
    Student s2("Shivam Desale");
    s2.rno = 1627;
    s2.cgpa = 8.4;
    
    // Using name + CGPA constructor, roll number set manually
    Student s3("Parag Desale", 8.5);
    s3.rno = 1628;

    // Using default constructor and setting all fields manually
    Student s4;
    s4.name = "Amol Desale";
    s4.rno = 1629;
    s4.cgpa = 7.9;

    // Printing all student details
    cout << s1.name << "  " << s1.rno << "  " << s1.cgpa << endl;
    cout << s2.name << "  " << s2.rno << "  " << s2.cgpa << endl;
    cout << s3.name << "  " << s3.rno << "  " << s3.cgpa << endl;
    cout << s4.name << "  " << s4.rno << "  " << s4.cgpa << endl;
}