#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool isprime(int n)
{
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }return true;
}
int gd(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return n/i;
    }
    return 1;
}
int minsteps(int n)
 {
    int count =0;
    while(n>1)
    {
        if(isprime(n)){
            count+=n;
            break;
        }
        
    }
    int hf=gd(n);
    count+=(n/hf);
    n=hf;
    return count;
 }
 int main()
{
    cout<<isprime(12)<<" ";
    cout<<gd(12)<<" ";
    cout<<minsteps(12)<<" ";
    return 0;
}