// Print Hello World 'n' times take 'n' as input form user

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for (int i = 1; i <= n; i++)      // int i = 1; ka matlab 1st se shurvat hogi / i <= n; ka matlab aap n me jo bhi value daloge vaha tak print hoga / i++ matlab phele 1 print hoga fir loop me 1+1 = 2 print fir 2+1 = 3 yese
    {
        cout<<"Hello World \n";
    }
    return 0;
}

/*1️⃣ Initialization — int i = 1
This part runs only once, at the start of the loop.
It creates a variable i and assigns it the value 1.
Here, i is the loop control variable — it keeps track of the loop count.
After this, the loop moves to the condition check.

🗒 Example:
At the beginning, i = 1.
2️⃣ Condition — i <= n
Before each iteration, this condition is checked.
If the condition is true, the loop body executes.
If it is false, the loop stops (ends).
This ensures that the loop runs only while i is less than or equal to n.
🗒 Example:
If n = 5, then the loop will run for i = 1, 2, 3, 4, 5.
When i becomes 6, the condition i <= 5 is false, and the loop stops.
3️⃣ Loop Body — { /* code }
This is the block of code that executes every time the condition is true.
You can write any logic here, like printing a number, performing a calculation, etc.
🗒 Example:
cout << i << endl;
This line will run n times, printing numbers 1 to n.
4️⃣ Update — i++
This statement runs after each iteration of the loop body.
It increments the value of i by 1 (i = i + 1).
Then the control goes back to the condition check.
🗒 Example:
After 1st iteration → i = 2
After 2nd iteration → i = 3
... and so on.
 */