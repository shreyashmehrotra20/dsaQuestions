#include <iostream>
using namespace std;
class Node{

    public:
    int data;
    Node* next;

    Node()
    {
        this->data=0;
        this->next=NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next= NULL;
    }
    
};

void insertHead(Node*& head,int data,Node* & tail)
{
    if(head==NULL)
    {
        Node* nw = new Node(data);
        head=nw;
        tail=nw;
        return;
    }
    Node* nw = new Node(data);

    nw->next= head;

    head = nw;
}
void insertTail(Node*& tail, int data, Node*& head)
{   
    if(head==NULL)
    {
        Node* nw = new Node(data);
        head=nw;
        tail=nw;
        return;
    }
    Node* node = new Node(data);

    tail->next= node;

    tail=node;
}
void inserMiddle(Node*)
void print(Node*& head)
    {    
        Node* temp = head;
        while(temp!=NULL)
        {   
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
int main() {
    
    Node* head = NULL;
    Node* tail = NULL;
    insertHead(head,50,tail);
    insertHead(head,60,tail);
    insertHead(head,70,tail);
    insertHead(head,80,tail);
    insertTail(tail,8,head);
    print(head);
    return 0; 
}