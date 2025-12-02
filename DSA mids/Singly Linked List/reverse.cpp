//Write a C++ program to create a singly linked list
// of n nodes and display it in reverse order.
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
    void insert_nodes(int val)
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
    void reverse_list()
    {
        Node*prev=NULL;
        Node*current=head;
        Node*next=NULL;
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        tail=head;
        head=prev;
    }
        
};
int main()
{
    List ll;
    ll.insert_nodes(5);
    ll.insert_nodes(4);
    ll.insert_nodes(3);
    ll.insert_nodes(2);
    ll.insert_nodes(1);
    ll.display();
    ll.reverse_list();
    cout<<endl;
    ll.display();

}