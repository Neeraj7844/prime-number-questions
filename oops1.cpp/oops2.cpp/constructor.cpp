#include<iostream>
using namespace std;
class bike
{
    public:
    int tyre;
    //default constructor
    bike()
    {
        cout<<"constructor call ho rha h"<<endl;
    }
};
int main()
{
    bike tvs;
    bike honda;
}