#include<iostream>
#include<string>
#include<vector>
using namespace std;
class cricketer
{
    public:
    string name;
    int age;
    int no_of_testmatches;
    int average_score;
};
int main()
{
    vector<cricketer> cricketers;
    for(int i=0;i<2;i++)
    {
       cricketer c;
       
        string name;
        int age,no_of_testmatches,average_score;
        
        cout<<"enter the details of the cricketer"<<i+1<<endl;

        cout<<"enter the name of the cricketer ="<<endl;
        cin.ignore();
        getline(cin,c.name); 
        cout<<"enter the age of the cricketer="<<endl;
        cin>>c.age;
        cout<<"enter the no of test matches="<<endl;
        cin>>c.no_of_testmatches;
        cout<<"enter the average score="<<endl;
        cin>>c.average_score;
        
        cricketers.push_back(c);
    }
       cout << "\n--- Cricketer Details ---\n";
    for (int i = 0; i < 2; i++) {
         string name;
        int age,no_of_testmatches,average_score;
        cout << "Cricketer " << i + 1 << ":\n";
        cout << "Name: " << cricketers[i].name << endl;
        cout << "Age: " <<cricketers[i].age << endl;
        cout << "Number of Test Matches: " <<cricketers[i].no_of_testmatches << endl;
        cout << "Average Score: " <<cricketers[i].average_score<< endl;
        
    }
      

    return 0;  
}
