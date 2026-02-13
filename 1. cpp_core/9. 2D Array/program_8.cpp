/* write a program to store roll number and marks obtained by 4 students side by side in a matrix :

4 students -                                                   R.No   Marks
    Shyam , Raghav , Harsh , Sanket                 Shyam       76      81
    76      13       82      88                     Raghav      13      76
    81      76       91      90                     Harsh       82      91
                                                    Sanket      88      90
*/

#include<iostream>
using namespace std;
int main ()
{
    int arr[2][4] = {{76 , 13 , 82 , 88} , {81 , 76 , 91 , 90}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main ()
{
    int arr[2][4] = {{76 , 13 , 82 , 88} , {81 , 76 , 91 , 90}};
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}