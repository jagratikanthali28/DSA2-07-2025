#include<iostream>
#include<stack>
using namespace std;

void findMid(stack<int>s,int count,int size)
{
    int mid=size/2;
   
    if(count==mid)
    {
     cout<<s.top();
      return;
    }
    
    int topeleement=s.top();
    s.pop();
    findMid(s,count+1,size);
    s.push(topeleement);
    
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int count=0;
    int size=s.size();
   findMid(s,count,size);
    
}
