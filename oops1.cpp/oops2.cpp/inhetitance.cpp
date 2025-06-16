#include<iostream>
#include<string>
using namespace std;
class vehicle  //parent class  base class
{
    public:
    int tyresize;
    int enginesize;
    int lights;
    string companyname;
};

class car : public vehicle //child class
{
    public:
    int stearingsize;
};

class bike : public vehicle //child class derived class
{
    public:
    int handlesize;
};

int main()
{
   car bugati;
   bugati.tyresize=15;
   bugati.enginesize=500;
   bugati.lights=5;

   cout<<bugati.tyresize<<endl;
   cout<<bugati.enginesize<<endl;
   cout<<bugati.lights<<endl;
}