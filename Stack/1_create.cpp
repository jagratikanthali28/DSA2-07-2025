#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int capacity)
    {
        arr=new int[capacity];
        size=capacity;
        top=-1;
    }
    
void push(int val)
{
    if(top==size-1)
    {
        cout<<"stack overflow";
    }
    else{
        top++;
        arr[top]=val;
    }
}
void pop(){
    if(top==-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else{
        arr[top]=0;
        top--;
    }
}
int getsize(){
    return top+1;
}
bool isEmpty(){
    if(top==-1)
    {
        return true;
    }
    else{
        return false;
    }
}
int gettopvalu()
{
    if(top==-1)
    {
        cout<<"ther is not elenet at the top,as stack is empty";
        return -1;
    }
    else{
        return arr[top];
    }
}
void print()
{
    cout<<"printing stack"<<endl;
    for(int i=0;i<top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};
int main()
{
    Stack s(5);
    s.print();
    s.push(10);
    s.print();
    s.push(20);
    s.print();
     s.push(30);
    s.print();
     s.push(40);
    s.print();
     s.push(50);
    s.print();
    cout<<s.gettopvalu()<<endl;
    cout<<s.getsize()<<endl;
    cout<<s.isEmpty()<<endl;
    s.pop();
    s.print();
     s.pop();
    s.print();
     s.pop();
    s.print();
     s.pop();
    s.print();
     s.pop();
    s.print();
    s.pop();
    return 0;
    
}