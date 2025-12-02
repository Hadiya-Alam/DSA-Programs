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
class List
{
    Node*head;
    Node*tail;
    public:
    List()
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
        }
        else
        {
        newnode->next=head;
        head=newnode;
        }
    }
    void Delete()
    {
        if(head==NULL)
        {
            cout<<"Linked List is already Empty!";
            return;
        }
        Node*temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            delete head;
            head=temp;
        }
        cout<<"\nALL NODES DELETED SUCCESSFULLY!";
    }
    void display()
    {
        if(head==NULL)
        {
            cout<<"\nno nodes available";
        }
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
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.display();
    ll.Delete();
    ll.display();
}

