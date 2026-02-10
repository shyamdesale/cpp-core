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
    for (int i = n; i <= n2; i = i +n1)
    {
        cout<<i<<" ";
    }   
}


/* Step by Step Explanation

#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;


Yahan user se starting number liya ja raha hai.

Example: n = 1

    int n1;
    cout<<"Kitne Ke AP se / Gap : ";
    cin>>n1;


n1 → common difference (gap) of the A.P.

Example: n1 = 2 → 1, 3, 5, …

    int n2;
    cout<<"Kaha tak print karna : ";
    cin>>n2;


n2 → ending limit

Loop tab tak chalega jab tak i <= n2

    for (int i = n; i <= n2; i = i + n1)
    {
        cout<<i<<" ";
    }


i = n → loop start

i <= n2 → condition check

i = i + n1 → next term

cout<<i<<" " → print current term

🔹 Example Run

Input:

Enter a Number : 1
Kitne Ke AP se / Gap : 2
Kaha tak print karna : 10


Output:

1 3 5 7 9
*/