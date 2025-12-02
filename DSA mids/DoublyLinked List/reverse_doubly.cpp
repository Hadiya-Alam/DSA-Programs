#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class List
{
    public:
    Node*head;
    Node*tail;
    List()
    {
        head=NULL;
        tail=NULL;
    }
    void reverse()
    {
        Node*temp=tail;
        if(head==NULL)
        {
            cout<<"NULL";
            return;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->prev;
        }
        cout<<"NULL";
    }
    void insert(int val)
    {
        Node*newnode=new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            return;
        }
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
};
int main()
{
    List ll;
    ll.insert(5);
    ll.insert(4);
    ll.insert(3);
    ll.insert(2);
    ll.insert(1);
    cout<<"reversed list!\n";
    ll.reverse();
}