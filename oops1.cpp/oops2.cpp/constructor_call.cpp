#include<iostream>
#include<string>
using namespace std;
class vehicle
{
    public:
    int tyresize;
    int enginesize;
    int lights;
    string companyname;

    void showcompany()
{
    cout<<companyname<<endl;
}

vehicle()
{ cout<<"constructor call ho rha h"<<endl;}
};

class bike :public vehicle
{
    public:
    int handlesize;
    bike()
    {
        cout<<"bike ka constructor call ho rha h"<<endl;
    }
};

int main()
{
    bike bmw;
    bmw.companyname="BMW";
    bmw.showcompany();
   cout<<bmw.companyname<<endl;


}