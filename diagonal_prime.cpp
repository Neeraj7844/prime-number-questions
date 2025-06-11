#include<iostream>
#include<vector>
using namespace std;
bool isprime(int n)
{
    if(n==1) return false;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int diagonal_prime(vector<vector<int>>&nums)
{
    int mx=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(isprime(nums[i][i]));
        mx=max(mx,nums[i][i]);
    
    if(isprime(nums[i][n-i-1])){
        mx=max(mx,nums[i][n-i-1]);
    }
}return mx;
}  

int main()
{
     vector<vector<int>> matrix = {
        {2, 3, 5},
        {4, 7, 6},
        {8, 9, 11}
    };
    cout<<isprime(13)<<endl;
    cout<<diagonal_prime(matrix)<<endl;
    return 0;
}