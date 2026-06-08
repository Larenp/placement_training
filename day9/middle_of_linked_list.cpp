#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val = 0)
    {
        data = val;
        next = nullptr;
    }
};
int middle_ele(Node *head){
    Node *slow=head;
    Node *fast=head;

    while(fast !=NULL && fast->next !=nullptr){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}


int main()
{

    Node *head;
    Node *n1 = new Node(5);
    head = n1;

    Node *n2 = new Node(15);
    n1->next = n2;

    Node *n3 = new Node(20);
    n2->next = n3;

    Node *n4 = new Node(25);
    n3->next = n4;
    
   cout<< middle_ele(head);
   
    return 0;
}

