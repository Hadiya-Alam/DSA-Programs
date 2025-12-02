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
    void push_back(int val)
    {
        Node*newnode=new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
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
     void delete_any(int key)
    {
        if(head==NULL)
        {
            cout<<"No elements avalilable!";
        }
        if(head->data==key)
        {
            Node*todelete=head;
            head=head->next;
            delete todelete;
        }
        Node*temp=head;
        while(temp->next!=NULL&&temp->next->data!=key)
        {
            temp=temp->next;
        }
        Node*todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
    }
};
int main()
{
    list ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.display();
    cout<<endl;
    ll.delete_any(2);
    ll.display();
    
}
