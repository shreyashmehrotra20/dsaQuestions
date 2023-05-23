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
int findLength(Node* &head)
{   
    int len =0;
    Node* temp = head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }

    return len;
}
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
void insertMiddle(Node*& tail, int data, Node*& head,int position)
{
    if(head==NULL)
    {
        Node* nw = new Node(data);
        head=nw;
        tail=nw;
        return;
    }

    if(position==0){
        insertHead(head,data,tail);
        return;
    }
    int len = findLength(head);
    if(position==len)
    {
        insertTail(tail,data,head);
        return;
    }
    int i=1;
    Node* prev = head;
    while(i<position)
    {
        prev=prev->next;
        i++;
    }
    Node* curr = prev->next;
    Node* node = new Node(data);

    node->next = curr;

    prev->next = node;


}
void delet(int position,Node* &head, Node* &tail)
{   

    if(head==NULL)
    {
        cout<<"Can't delete";
        return;
    }
    int len = findLength(head);
    if(position==1)
    {
        Node* temp = head;
        head=head->next;
        temp->next=NULL;
        delete(temp);
        return;
    }
    else if(position==len)
    {
        Node* prev =head;
        int i=1;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }

        prev->next=NULL;

        Node* temp=tail;
        tail=prev;
        delete(temp);
        return;
    }
    else{
       Node* first=head;
       int i=1;
       while(i<position-1)
       {
          first=first->next;
          i++;
       }
       Node* curr = first->next;

       first->next=curr->next;
       curr->next=NULL;
       delete(curr);
       return;
    }
}
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
    insertMiddle(tail,100,head,5);
    cout<<endl;
    print(head);
    delet(2,head,tail);
    cout<<"After deleting "<<endl;
    print(head);
    
    return 0; 
}