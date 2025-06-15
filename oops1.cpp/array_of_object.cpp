#include<iostream>
using namespace std;
//static prograamin
class cricketer
{
    public:
    char name;
    int age;
    int nooftestmatches;
    int averagescore;
};
int main()
{
    cricketer virat;
     virat.name='v';
     virat.age=30;
     virat.nooftestmatches=100;
     virat.averagescore=80;
    
     cricketer dhoni;
      dhoni.name='d';
      dhoni.age=40;
      dhoni.nooftestmatches=200;
      dhoni.averagescore=100;
    
    cricketer cricketers[2]={virat,dhoni};
    for(int i=0;i<2;i++)
    {
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].nooftestmatches<<endl;
        cout<<cricketers[i].averagescore<<endl;
    }
}