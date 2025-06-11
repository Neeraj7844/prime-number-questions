#include<iostream>
using namespace std;
bool perfect_num(int n)
{
    int sum=0;
    for(int i=1;i<n-1;i++) if(n%i==0) sum=sum+i;
    for(int i=n-1;i>=0;i--) if(n%i==0) sum=sum+n/i;
    return(sum==n);
}
int main()
{
    cout<<perfect_num(16)<<endl;
    return 0;
}