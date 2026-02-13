#include<iostream>
using namespace std;
int main ()
{
    int arr[5] = {2 , 4 , 5 , 6 , 1};
    
    // isme bhi direct array store element update kr sakte hai      arr[0] = 10;

    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}