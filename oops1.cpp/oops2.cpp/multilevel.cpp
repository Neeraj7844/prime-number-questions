#include<iostream>
using namespace std;
class A
{
    private:
     int a_ka_private;
    protected:
     int a_ka_protected;
    public:
     int a_ka_public;

     A(){
        cout<<"a ko call ho rha h"<<endl;
        }
};
class B:protected A
{
    private:
     int b_ka_private;
    protected:
     int b_ka_protected;
    public:
     int b_ka_public;

    B(){
        cout<<"b ko call ho rha h"<<endl;
       }
};

class C:protected B
{
    private:
     int c_ka_private;
    protected:
     int c_ka_protected;
    public:
     int c_ka_public;

    C()
    {
        cout<<"c ko call ho rha h"<<endl;
    }
};

int main()
{
    C c;
    int a_ka_private;

}