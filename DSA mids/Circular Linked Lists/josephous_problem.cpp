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
    void createlist(int n)
    {
        head=new Node(1);
        Node*temp=head;
        for(int i=2;i<=n;i++)
        {
            temp->next=new Node(i);
            temp=temp->next;
        }
        temp->next=head;
    }
    void kill(int k)
    {
        Node*ptr=head;
        Node*prev=NULL;
        while(ptr->next!=ptr)
        {
        for(int count=1;count<k;count++)
        {
            prev=ptr;
            ptr=ptr->next;
        }
        cout<<"\nremoving "<<ptr->data;
        prev->next=ptr->next;
        delete ptr;
        ptr=prev->next;
        }
    cout<<"\n Remaining last person: "<<ptr->data;
    }
};
int main()
{
    int n,k;
    List ll;
    cout<<"Enter number of players: ";
    cin>>n;
    cout<<"\nEnter kill size: ";
    cin>>k;
    ll.createlist(n);
    ll.kill(k);
}