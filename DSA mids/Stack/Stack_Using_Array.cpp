#include<iostream>
using namespace std;
class Stack
{
    public:
    int top;
    int s[5];

    Stack()
    {
        top=-1;
    }
    void push(int val)
    {
        if(top==4)
        {
            cout<<"stack overflow";
        }
        else
        {
        top++;
        s[top]=val;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack UnderFlow";
        }
        else
        {
        top--;
        }
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"stack underflow";
        }
        else
        {
        return s[top];
        }
    }
    bool isEmpty()
    {
        return top==-1;
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.isEmpty())
    {
        cout<<s.Top()<<"  ";
        s.pop();
    }
}