#include<iostream>
using namespace std;
class player
{
    private:
      int health;
      int age;
      int score;
      bool alive;

    public:
      int  gethealth(){
         return health;
      }
      int getage()
      {
        return age;
      }
      int getscore()
      {
        return score;
      }
      int isalive()
      {
        return alive;
      }
      void sethealth(int health)
      {
        this->health=health;
      }
      void setage(int age)
      {
        this->age=age;
      }
      void setscore(int score)
      {
        this->score=score;
      }
      void setisalive(bool alive)
      {
        this->alive=alive;
      }
};
int addscore(player a,player b)
{
    return a.getscore()+b.getscore();
}
player getmaxscoreplayer(player a,player b)
{
    if(a.getscore()>b.getscore())
    return a;
    else
    return b;
}
int main()
{
    player harsh;
    player raghav;

    harsh.sethealth(70);
    harsh.setage(21);
    harsh.setisalive(true);
    harsh.setscore(100);

    raghav.sethealth(100);
    raghav.setage(22);
    raghav.setisalive(true); 
    raghav.setscore(20);


    cout<<addscore(harsh,raghav)<<endl;
    player sanket=getmaxscoreplayer(harsh,raghav);
    cout<<sanket.getscore()<<endl;
    cout<<sanket.gethealth();
}