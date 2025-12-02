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
    public:
    Node*head;
    Node*tail;
    List()
    {
        head=NULL;
        tail=NULL;
    }
    void insert(int val)
    {
        Node*newnode=new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            tail->next=head;
            return;
        }
        newnode->next=head;
        head=newnode;
        tail->next=head;
    }
    void display()
    {
        Node*temp=head;
        do
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }while (temp!=head);
        cout<<temp->data;
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
    ll.display();
}