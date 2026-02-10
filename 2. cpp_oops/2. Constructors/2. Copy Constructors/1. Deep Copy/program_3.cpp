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
};

int main ()
{
    App a("Agri_Tech_Plus" , 20000000 , 10000 , "Shyam Desale");

    App b = a;

    cout<<a.appname<<"  "<<a.appcost<<"  "<<a.maincost<<"  "<<a.developname<<endl;
    cout<<b.appname<<"  "<<b.appcost<<"  "<<b.maincost<<"  "<<b.developname<<endl;
}