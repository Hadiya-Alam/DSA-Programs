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
    void delete_perticular(int val)
    {
        if(head->data==val)
        {
            Node*todelete=head;
            head=head->next;
            if(head!=NULL)
            {
                head->prev=NULL;
            }
            todelete->next=NULL;
            delete todelete;
            return;
        }
        Node*temp=head;
        while(temp!=NULL&&temp->data!=val)
        {
            temp=temp->next;
        }
        if(temp==NULL)
        {
            cout<<"ELEMENT NOT FOUND";
            return;
        }
        if(temp==tail)
        {
            tail=temp->prev;
        }
        if(temp->next!=NULL)
        temp->next->prev=temp->prev;

        if(temp->prev!=NULL)
        temp->prev->next=temp->next;

        delete temp;
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
    cout<<"\nafter deleting 5 from list:\n";
    ll.delete_perticular(5);
    cout<<"tail="<<ll.tail->data<<endl;
    ll.display();
}
