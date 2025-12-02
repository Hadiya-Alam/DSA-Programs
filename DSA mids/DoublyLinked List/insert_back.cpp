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
    void insert_back(int val)
    {
        Node*temp=tail;
        Node*newnode=new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            return;
        }
        temp->next=newnode;
        newnode->prev=temp;
        tail=newnode;
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
    ll.insert_back(1);
    ll.insert_back(2);
    ll.insert_back(3);
    ll.display();
    

}