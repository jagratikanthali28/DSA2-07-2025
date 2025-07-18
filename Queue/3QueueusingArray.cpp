#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int n;
    int front;
    int rear;
    
    Queue(int size)
    {
        arr=new int[size];
        n=size;
        front=-1;
        rear=-1;
    }
    
    void push(int value){
        if(rear==n-1)
        {
            cout<<"queue overflow"<<endl;
        }
        else if(front==-1 && rear==-1)
        {
             front++;
            rear++;
            arr[rear]=value;
           
        }
        else{
            rear++;
            arr[rear]=value;
        }
    }
    
    void pop()
    {
        if(front==-1 && rear==-1)
        {
            cout<<"queue underflow"<<endl;
        }
        else if(front==rear)
        {
             arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else{
           arr[front]=-1;
          // delete(arr[front]);
            front++;
        }
    }
 
    int getFront()
    {
        if(front==-1)
        {
            cout<<"queue is empty:"<<endl;
        }
        else{
        int ans=arr[front];
        return ans;
        }
        
    }
    
    int getRear(){
    if(rear==-1)
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        int ans2=arr[rear];
        return ans2;
    }
    }
    
    int getsize()
    {
        int count=0;
        for(int i=front;i<=rear;i++)
        {
            count++;
        }
        return count;
    }
    
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return true;
        }
        return false;
    }
    void print1()
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(233);
    q.push(32444);
    q.print1();
    q.pop();
    q.print1();
   q.pop();
    q.print1();
     q.pop();
      q.pop();
    q.pop();
    q.print1();
    int ans=q.getFront();
    cout<<"front element is:"<<ans<<endl;
    int ans2=q.getRear();
    cout<<"rear elemetn is:"<<ans2<<endl;
    int ans3=q.getsize();
    cout<<"size is:"<<ans3<<endl;
}