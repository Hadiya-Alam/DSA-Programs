//push_front
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
class list
{
    Node*head;
    Node*tail;
 public:
    list()
    {
        head=NULL;
        tail=NULL;
    }
    void push_front(int val)
    {
        Node*newnode=new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            return;
        }
        else
        {
            newnode->next=head;
            head=newnode;
        }
    }
    void display()
    {
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
        }
    }
};

int main()
{
    list ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1); 
    ll.display();
}
