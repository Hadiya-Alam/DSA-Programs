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
    int search(int key)
    {
        Node*temp=head;
        int index=0;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                return index;
            }
            temp=temp->next;
            index=index+1;
        }
        return -1;
    }
};
int main()
{
    List ll;
    cout<<ll.search(2);
}