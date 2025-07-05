#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s,int val)
{
    if(s.empty())
    {
        s.push(val);
        return;
    }
    int topelement=s.top();
    s.pop();
    insertAtBottom(s,val);
    
    s.push(topelement);
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int val=53;
    insertAtBottom(s,val);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
