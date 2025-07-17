#include<iostream>
#include<stack>
using namespace std;
bool checkSorted(stack<int>s,int size)
{
    int max=INT_MAX;
    int count=0;
    if(count==size)
    {
        return true;
    }
    if(s.top()>min)
    {
        count++;
    }

}
int main()
{
   stack<int>s;
   s.push(10);
   s.push(20);
   s.push(30);
    s.push(40);
    s.push(50);
    int size=s.size();
    bool ans=checkSorted(s,size);
    cout<<"ans is:"<<ans<<endl;
}