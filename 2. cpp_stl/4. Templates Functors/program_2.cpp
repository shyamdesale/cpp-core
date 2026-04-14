#include <iostream>
using namespace std;

// Structure to store employee details
struct node
{
    string name;
    int salary;
    int age;

    // Constructor with proper parameter types
    node(string name_, int salary_, int age_)
    {
        name = name_;
        salary = salary_;
        age = age_;
    }
};

int main()
{
    // Create object directly (correct way)
    node shyam("Shyam Desale", 100000, 20);

    cout << "Name   : " << shyam.name << endl;
    cout << "Salary : " << shyam.salary << endl;
    cout << "Age    : " << shyam.age << endl;

    return 0;
}