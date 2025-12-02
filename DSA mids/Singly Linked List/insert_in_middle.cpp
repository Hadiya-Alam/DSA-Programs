
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
    Node*head;
    Node*tail;
    public:
    List()
    {
        head=NULL;
        tail=NULL;
    }
    void insert_in_middle(int val,int pos)
    {
        Node*newnode=new Node(val);
        if(pos<0)
        {
            cout<<"ERROR";
            return;
        }
        if(pos==0)
        {
            head=tail=newnode;
        }
        if(pos>0)
        {
            Node*temp=head;
            for(int i=0;i<pos-1;i++)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
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
};

int main()
{
    List ll;
    ll.insert_in_middle(4,0);
    ll.insert_in_middle(5,1);
    ll.insert_in_middle(6,2);
    ll.display();
}