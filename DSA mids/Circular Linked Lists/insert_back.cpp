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
    void insert_back(int val)
    {
        Node*newnode=new Node(val);
        if(head==NULL)
        {
            head =tail=newnode;
            tail->next=head;
            return;
        }
        tail->next=newnode;
        tail=newnode;
        newnode->next=head;
    }
    void display()
    {
        Node*temp=head;
        do
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        } while (temp!=head); 
        cout<<temp->data;
    }
};
int main()
{
    List ll;
    ll.insert_back(1);
    ll.insert_back(2);
    ll.insert_back(3);
    ll.display();
}