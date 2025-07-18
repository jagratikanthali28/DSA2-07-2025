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
    
    void pushfront(int val)
    {
       if(front==0)
       {
           cout<<"queue overflow"<<endl;
       }
       else if(front==-1 && rear==-1){
            front++;
           rear++;
           arr[front]=val;
       }
       else{
            front--;
           arr[front]=val;
       }
    }
    
    void pushback(int value)
    {
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
    
    void popfront()
    {
       if(front==-1 && rear==-1)
        {
            cout<<"queue underflow"<<endl;
        }
        else if(front==rear)
        {
            
            front=-1;
            rear=-1;
        }
        else{
           arr[front]=-1;
          // delete(arr[front]);
            front++;
        } 
    }
    
    void popback()
    {
         if(front==-1 && rear==-1)
        {
            cout<<"queue underflow"<<endl;
        }
       else if(front==rear)
        {
            
            front=-1;
            rear=-1;
        }
        else{
        arr[rear]=-1;
        rear--;
        }
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
    q.pushfront(10);
    q.print1();
    q.pushback(20);
    q.print1();
    q.pushback(30);
    q.print1();
    q.popback();
    q.print1();
    q.popfront();
    q.print1();
     q.pushfront(1870);
      q.print1();
       q.popfront();
         q.print1();
         
        q.popfront();
          q.print1();
          //  q.popfront();
            q.popback();
    q.print1();
      q.popback();
    
          q.print1();
    return 0;
}