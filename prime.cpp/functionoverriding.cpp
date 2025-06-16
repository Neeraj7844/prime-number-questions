#include<iostream>
using namespace std;
class A
{
    public :
    int a_ka_public;
    void show()
    {
        cout<<"a ka show hu"<<endl;;
    }
};

class B : public A
{
    public :
    int b_ka_public;
    void show()
    {
        cout<<"b ka show hu"<<endl;
    }
};

int main()
{
    A a;
    a.show();
    B b;
    b.show();
    b.A:: show();
}