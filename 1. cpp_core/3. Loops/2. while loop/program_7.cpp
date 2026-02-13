// Display the A.P- 1, 3, 5, 7....200

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int n1;
    cout<<"Kitne Ke AP se / Gap : ";
    cin>>n1;
    int n2;
    cout<<"Kaha tak print karna : ";
    cin>>n2;
    int i = 1;
    while (i <= n2)
    {
        cout<<i<<" ";
        i = i + n1;
    }    
    return 0;  
}