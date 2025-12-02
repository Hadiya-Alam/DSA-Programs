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
    void delete_first()
    {
        Node*temp=head;
        if(head==NULL)
        {
            cout<<"NO NODES AVAILABLE!";
            return;
        }
        head=head->next;
        if(head!=NULL)
        {
            head->prev=NULL;
            temp->next=NULL;
            delete temp;
        }
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
        head->prev=newnode;
        head=newnode;
    }
    void display()
    {
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"<->";
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
    cout<<endl<<"After deleting first element\n";
    ll.delete_first();
    ll.display();
}