#include<iostream>
using namespace std;

class App
{
    public:
        string developername;
        string appprice;
        int maintenencecost;
        float servertime;

    App(string d , string a , int m , float s)
    {
        developername = d;
        appprice = a;
        maintenencecost = m;
        servertime = s;
    }
};

void change(App& a)
{
    a.maintenencecost = 10000;
}

int main ()
{
    App a("Shyam Desale" , "1 Corore" , 20000 , 3);

    cout<<a.developername<<"  "<<a.appprice<<"  "<<a.maintenencecost<<"  "<<a.servertime<<endl;

    change(a);
    cout<<a.developername<<"  "<<a.appprice<<"  "<<a.maintenencecost<<"  "<<a.servertime<<endl;
}