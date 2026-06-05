#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val = 0) {
        data = val;
        next = nullptr;
    }
};

void traversal(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
   
    Node* head;
    Node* n1 = new Node(5);
    head = n1;

    Node* n2 = new Node(15);
    n1->next = n2;

    Node* n3 = new Node(20);
    n2->next = n3;

    Node* n4 = new Node(25);
    n3->next = n4;

    traversal(head);

    return 0;
}
//traversal
//5 -> 15 -> 20 -> 25 -> NULL
/*
head
  |
  v
+---+---+    +----+---+    +----+---+    +----+------+
| 5 | *----->| 15 | *----->| 20 | *----->| 25 | NULL |
+---+---+    +----+---+    +----+---+    +----+------+
*/


