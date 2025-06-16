#include<iostream>
using namespace std;
class bike
{
    public:
    int tyresize;
    int enginesize;

    bike (int tyresize,int enginesize)
    {
     this->tyresize=tyresize;
     this->enginesize=enginesize;
    }
};

int main()
{
    bike tvs(12,100);
    bike honda(15,150);
    bike royal( 18, 200);

    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
    cout<<royal.tyresize<<" "<<royal.enginesize<<endl;
}
