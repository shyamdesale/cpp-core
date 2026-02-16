#include <iostream>   // for cout, endl
using namespace std;

// Create a namespace named "shyam"
// Namespace helps avoid name conflicts in large programs
namespace shyam {
    int stl = 3;   // variable inside namespace
}

int main()
{
    // Local variable with same name "stl"
    // This belongs to main() scope only
    float stl = 5;

    // Prints local variable (main scope)
    cout << "Local stl (float) = " << stl << endl;

    // Access variable from namespace using scope resolution operator ::
    cout << "Namespace stl (int) = " << shyam::stl << endl;

    return 0;
}