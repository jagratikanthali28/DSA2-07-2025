#include<iostream>
#include<stack>
using namespace std;
void Mid(stack<int>s,int size,int count)
{
    int mid=size/2;
    if(count==mid)
    {
        cout<<s.top()<<endl;
        return;
    }
    int New=s.top();
    s.pop();
    Mid(s,size,count+1);
    s.push(New);
}
int main()
{
    int count=0;
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
   int size=s.size();
    cout<<s.size();
  Mid(s,size,count);
   
}