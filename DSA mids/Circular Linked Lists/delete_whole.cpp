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
    void delete_whole()
    {
        Node*temp=head;
        if(head==NULL)
        {
            cout<<"Linked list is already empty!";
            return;
        }
        if(head==tail)
        {
            head=tail=NULL;
            return;
        }
        tail->next=NULL;
        while (temp!=NULL)
        {
            head=head->next;
            delete temp;
            temp=head;
        } 
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
        if(head==NULL)
        {
            cout<<"LIST IS EMPTY!";
            return;
        }
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
    cout<<endl<<"Deleting list"<<endl;
    ll.delete_whole();
    ll.display();
}


