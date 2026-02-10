// print ever or odd indices ke element ki substraction

#include<iostream>
using namespace std;
int main ()
{
    int arr[5] = {1, 4, 6 , 3, 5};
    int n = sizeof(arr)/4;
    int even = 0;
    int odd = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            even += arr[i];
        }
        else{
            odd += arr[i];
        }
    }
    int diff = even - odd;
    cout<<diff;
}