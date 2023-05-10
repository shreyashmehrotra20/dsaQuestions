#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
    
};

void print(Node* head)
    {    
         Node* temp = head;
         while(temp!=NULL)
         {
            cout<<temp->data<< " ";
            temp=temp->next;
         }
    }
int main() {
    
    Node* first  =new Node(10);
    Node* second  =new Node(11);
    Node* third  =new Node(12);
    Node* fourth  =new Node(13);
    Node* fifth  =new Node(14);
    

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    

     // printing value 
    print(first);
    return 0; 
}