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
        head=tail=NULL;
    }
    void pop_front()
    {
        if(head==NULL)
        {
            cout<<"No Elements in list";
        }
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

};
int main()
{
    list ll;
    ll.pop_front();
}
