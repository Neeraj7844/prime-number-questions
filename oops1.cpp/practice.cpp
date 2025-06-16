#include<iostream>
#include<stack>
using namespace std;
void display( stack <int> & st)
{
 if(st.size()==0) return;
 int x=st.top();
 st.pop();
 //cout<<x<<" ";
 display(st);
  cout<<x<<" ";
 st.push(x);
}
void pushatbottom(stack <int>& st,int val)
{
  if(st.size()==0)
  {
    st.push(val);
    return;
  }
  int x=st.top();
  st.pop();
  pushatbottom(st,val);
  st.push(x);
}


int main()
{
    stack <int>st;
    
    int n;
    cout<<"Enter the numbers"<<endl;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int arr[n];
        st.push(i);
    }
    
   /* st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);*/
    cout<<endl;
    display(st);
     pushatbottom(st,-10);
     display(st);
}