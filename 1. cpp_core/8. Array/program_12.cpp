#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {12 , 442 , 2 , 5 , 23 , 64 , 4 , 7 , 84};
    cout<<sizeof(arr)/4;    // aagar muze array me kitne element hai vo print karna hai to
}

// cout<<sizeof(arr)/4; cout print karega sizeof elements for ex : aagar 8 integirs hai to 32 aayega kyu ki har ek element ki
// size 4 hoti hai is liye bad me 4 se divide karne ka matlab size of elements in array = 8