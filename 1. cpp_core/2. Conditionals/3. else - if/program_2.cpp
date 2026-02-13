#include<iostream>
using namespace std;
int main()
{
    float marks;
    cout<<"Enter a Marks : ";
    cin>>marks;
    if (marks >= 91)
    {
        cout<<"Grade : O , Grade Point : 10 , Remark : Outstanding";
    }
    else if (marks >= 81)
    {
        cout<<"Grade : A+ , Grade Point : 9 , Remark : Excellent";
    }
    else if (marks >= 71)
    {
        cout<<"Grade : A , Grade Point : 8 , Remark : Very Good";
    }
    else if (marks >= 61)
    {
        cout<<"Grade : B+ , Grade Point : 7 , Remark : Good";
    }
    else if (marks >= 51)
    {
        cout<<"Grade : B , Grade Point : 6 , Remark : Above Average";
    }
    else if (marks >= 41)
    {
        cout<<"Grade : C+ , Grade Point : 5 , Remark : Average";
    }
    else if (marks >= 40)
    {
        cout<<"Grade : C , Grade Point : 4 , Remark : Marginal Pass";
    }
    else
    {
        cout<<"Fail / Needs Improvement";
    }
    return 0;
}