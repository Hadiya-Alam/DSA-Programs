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
    void deletekey(int key)
    {
        if(head==NULL)
        {
            cout<<"NO elements available";
            return;
        }
        if(head->data==key)
        {
            Node*todelete=head;
            head=head->next;
            delete todelete;
            return;
        }
        Node*temp=head;
        while(temp->data!=key&&temp!=NULL)
        {
            temp=temp->next; 
        }
        if(temp->next==NULL)
        {
            cout<<"ELEMENT NOT FOUND";
        }
        else
        {
            Node*todelete=temp->next;
            temp->next=temp->next->next;
            delete temp;
            return;
        }

    }
};
int main()
{
    List ll;
    ll.deletekey(4);   
}