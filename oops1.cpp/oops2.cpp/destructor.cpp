#include<iostream>
using namespace std;
class bike
{
    public:
    int tyresize;
    int enginesize;

    bike(int tyresize,int enginesize) 
    {
        this->tyresize=tyresize;
        this->enginesize=enginesize;
    }
    ~bike()
    {
        cout<<"destructor call ho rha h !"<<endl;
    }
};
int main()
{
    bike tvs(12,100);
    bike honda(13,150);
    bike royal(15,350);

    bool flag=true;
    if(flag==true)
    {
        bike bmw(17,1000);
        cout<<bmw.tyresize<<" "<<bmw.enginesize<<endl;
    }
     cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
    cout<<royal.tyresize<<" "<<royal.enginesize<<endl;
}