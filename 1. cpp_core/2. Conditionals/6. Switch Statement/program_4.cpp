#include<iostream>
using namespace std;
int main ()
{
    int month;
    cout<<"Enter a Month Number : ";
    cin>>month;

    switch (month)
    {
    case 1 :
        cout<<"January";
        break;
    case 2 :
        cout<<"February";
        break;
    case 3 :
        cout<<"March";
        break;
    case 4 :
        cout<<"April";
        break;
    case 5 :
        cout<<"May";
        break;
    case 6 :
        cout<<"June";
        break;
    case 7 :
        cout<<"July";
        break;
    case 8 :
        cout<<"August";
        break;
    case 9 :
        cout<<"September";
        break;
    case 10 :
        cout<<"October";
        break;
    case 11 :
        cout<<"November";
        break;
    case 12 :
        cout<<"December";
        break;
    
    default:
        cout<<"Invalid Month Number";
    }
    return 0;
}

    // You used '1', '2', ... '12' (in single quotes) — these are characters, not integers.

    // The variable month is of type int, so cases should be numbers, not character constants.
    // ✅ Use case 1: instead of case '1':

    // case '10', '11', '12' — invalid, because character constants can only hold one character.

    // There’s no message for invalid input in default:.

    // Small spelling error: "Sepetember" → "September"