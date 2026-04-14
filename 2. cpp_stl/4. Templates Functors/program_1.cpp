#include <iostream>
using namespace std;

// Define a structure to store employee details
struct node
{
    string name;   // string variable to store name
    int salary;    // integer variable to store salary
    int age;       // integer variable to store age
};

int main()
{
    node shyam;   // create structure variable (object)

    // Assign values to structure members
    shyam.name = "Shyam Desale";
    shyam.salary = 100000;   // integer, not string
    shyam.age = 20;          // integer

    // Display values
    cout << "Name   : " << shyam.name << endl;
    cout << "Salary : " << shyam.salary << endl;
    cout << "Age    : " << shyam.age << endl;

    return 0;
}