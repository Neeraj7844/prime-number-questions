#include<iostream>
#include<vector>
using namespace std;
int gd(int n){
    for(int i=n/2;i>=1;i--)
    {
        if(n%i==0) return i;
        else return 1;
    }
}
int minsteps(int n)
{
    int count=0;
    while(n>1)
    {
        int hf=gd(n);
        count +=(n/hf);
        n=hf;
    }return count;
}

int main()
{
   cout<<gd(12)<<" ";
   cout<<minsteps(12)<<" ";
}