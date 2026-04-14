#include<iostream>
using namespace std;

class App
{
    public:
        string appname;
        int appcost;
        int maincost;
        string developname;

    App(string a , int a1 , int m , string d)
    {
        appname = a;
        appcost = a1;
        maincost = m;
        developname = d;
    }
    
    void print(int appcost)
    {
        cout<<appname<<" "<<this->appcost<<" "<<maincost<<" "<<developname<<endl;
        cout<<appcost<<endl;
    }
};

int main ()
{
    App a("Agri_Tech_Plus" , 20000000 , 10000 , "Shyam Desale");
    
    App b = a;

    a.print(6);
    b.print(2);
}