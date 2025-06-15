#include<iostream>
#include<string>
#include<vector>
using namespace std;
class player
{
    private:
    string name;
    int age;
    int score;
    int matches;

    public:
//getter to get the data
    string getname(){
        return name;
    }
    int getage()
    {
        return age;
    }
    int getscore()
    {
        return score;
    }
    int getmatches()
    {
        return matches;
    }

//setter to set the geted data or replace from original data
    void setname(string name)
    {
        this->name=name;
    }
    void setage(int age)
    {
        this->age=age;
    }
    void setscore(int score)
    {
        this->score=score;
    }
    void setmatches(int matches)
    {
        this->matches=matches;
    }
};

int main()
{
  
    int n;
    cout<<"Enter the number of players"<<endl;
    cin>>n;

     vector<player> players(n);

    for(int i=0;i<n;i++)
    {
        string name;
        int age,score,matches;

        cout<<"Enter the details of the player : "<<i+1<<endl;
        cout<<"enter the name of the player: ";
        //to clear new line from previous input
        cin.ignore(); 
        //read full name
        getline(cin,name);
        cout<<"enter the age of the player: ";
        cin>>age;
        cout<<"enter the score of the player: ";
        cin>>score;
        cout<<"enter the matches of the player: ";
        cin>>matches;

        //set data using setter
        players[i].setname(name);
        players[i].setage(age);
        players[i].setscore(score);
        players[i].setmatches(matches);

    }

        cout<<"\n----player information----\n"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"/n player"<<i+1<<endl;
            cout<<"name=  "<<players[i].getname()<<endl;
            cout<<"age=  "<<players[i].getage()<<endl;
            cout<<"score=  "<<players[i].getscore()<<endl;
            cout<<"matches=  "<<players [i].getscore()<<endl;
        }
        return 0;
    
}
