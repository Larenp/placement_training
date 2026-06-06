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

void traversal(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
void insert_at_end(Node *head,int val){
    if(!head)return;
    while(head->next){
        head=head->next;
    }
    Node *newNode = new Node(val);
    head->next= newNode;

}
void insert_at_begging(Node *head, int val){
    if(!head)return;
  
   Node *newNode =new Node(val);
   newNode->next = head;
   head = newNode;
  
}
void delete_at_start(Node *head){
    if(!head)return;
    Node *temp = head;
    head = head->next;
    delete temp;

}
void delete_at_end(Node *head){
    if(!head)return;
    if(!head->next){
        delete head;
        head = nullptr;
        return;
    }
    Node *temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

}
void add_start(Node *head,int val){
    Node *newNode =new Node(val);
   newNode->next = head;
   head = newNode;
}

void add_middle(Node *head,int val){
    


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
    insert_at_end(head,30);
    insert_at_begging(head,0);
    traversal(head);
    delete_at_start(head);
    traversal(head);
    delete_at_end(head);
    traversal(head);        

    return 0;
}
// traversal
// 5 -> 15 -> 20 -> 25 -> NULL
/*
head
  |
  v
+---+---+    +----+---+    +----+---+    +----+------+
| 5 | *----->| 15 | *----->| 20 | *----->| 25 | NULL |
+---+---+    +----+---+    +----+---+    +----+------+
*/
