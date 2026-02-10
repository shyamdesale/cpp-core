#include<iostream>
using namespace std;

// Function jo array ko receive karta hai (by reference semantics)
void change(int arr[])
{
    // Index 1 ka element change kar diya
    arr[1] = 9;
}

int main ()
{
    // Array initialization
    int arr[] = {1 , 3 , 4};

    // Pehle array print karo
    for (int i = 0; i <= 2; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;

    // Function call — original array pass ho raha hai
    change(arr);

    // Function se return ke baad updated array print karo
    for (int i = 0; i <= 2; i++)
    {
        cout << arr[i] << "  ";
    }
}

/*    Algorithm :
        Start program
        Ek integer array {1, 3, 4} create karo
        Loop se array ke 3 elements print karo
        change() function ko array pass karo
        Function ke andar array index 1 ka value 9 set karo
        Function return hone ke baad phir se poora array print karo
        Program end
*/