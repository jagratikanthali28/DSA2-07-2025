#include<iostream>
#include<queue>
using namespace std;
int main()
{
   deque<int> dq;
   dq.push_front(10);
    dq.push_front(200);
    dq.push_front(20);
     dq.push_back(110);
   
   cout<<dq.size()<<endl;
   cout<<dq.empty()<<endl;
   cout<<dq.front()<<endl;
   dq.pop_front();
   cout<<dq.front()<<endl;
   
}