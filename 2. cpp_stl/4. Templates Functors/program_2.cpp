#include <iostream>
using namespace std;

// Define a structure to store employee details
struct node
{
    string name;
    int salary;
    int age;

    node (name_ , salary_ , age_)
    {
        name = name_;
        salary = salary_;
        age = age_;
    }
};

int main()
{
    node shyam = new node ("Shyam Desale" , 100000 , 20);

    cout << "Name   : " << shyam.name << endl;
    cout << "Salary : " << shyam.salary << endl;
    cout << "Age    : " << shyam.age << endl;

    return 0;
}