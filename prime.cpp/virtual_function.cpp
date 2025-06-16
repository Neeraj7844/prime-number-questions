#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
     int tyresize;
    int enginesize;
    int lights;
    string companyname;

   virtual void show()
    {
        cout<<"vehicle ka show"<<endl;
    }
};
class bike
{
    public:
    int handlesize;
    void show()
    {
        cout<<"bike ka show call ho rha h"<<endl;
    }
};

int main()
{
    vehicle a;
    bike b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
}