#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
void traverse(Node *head)
{
    while (head)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void add_start(Node *head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        head->next = NULL;
    }
    head->prev = n;
    n->next = head;
    head = n;
}

void insert_at_middle(Node *head, int val)
{
    Node *n = new Node(val);
    Node *fast = head;
    Node *slow = head;

    while (fast != NULL && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    Node *prevNode = slow->prev;
    n->prev = prevNode;
    prevNode->next = n;

    slow->prev = n;
    n->next = slow;
    traverse(head);
}
void add_at_end(Node *head, int val)
{
    Node *newNode = new Node(val);
    if (!head)
        head = newNode;

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = NULL;

    traverse(head);
}

int main()
{
    Node *head;

    Node *n1 = new Node(5);
    head = n1;

    Node *n2 = new Node(10);
    n1->next = n2;
    n2->prev = n1;

    Node *n3 = new Node(15);
    n2->next = n3;
    n3->prev = n2;

    Node *n4 = new Node(20);
    n3->next = n4;
    n4->prev = n3;

    Node *n5 = new Node(25);
    n4->next = n5;
    n5->prev = n4;
    Node *n6 = new Node(30);
    n5->next = n6;
    n6->prev = n5;

    add_start(head, 1);
    insert_at_middle(head, 0);
    add_at_end(head, 1);

    return 0;
}