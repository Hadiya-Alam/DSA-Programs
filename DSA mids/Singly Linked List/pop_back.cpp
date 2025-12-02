//pop back
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
    void pop_back()
    {
        if(head=NULL)
        {
            cout<<"NO ELEMENTS AVAILABLE!";
        }
        Node*temp=head;
        while(temp->next=tail)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
};
int main()
{
    List ll;
    ll.pop_back();
}