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
    void insert_front(int val)
    {
        Node*newnode=new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            return;
        }
        newnode->next=head;
        head=newnode;
    }
    void insert_back(int val)
    {
        
    }
    void display()
    {
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
int main()
{
    List ll;
    ll.insert_front(5);
    ll.insert_front(4);
    ll.insert_front(3);
ll.insert_front(2);
ll.insert_front(1);
ll.display();

}
