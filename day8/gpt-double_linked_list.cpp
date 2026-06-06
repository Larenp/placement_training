#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = next = NULL;
    }
};

class CircularDLL {
private:
    Node* head;

public:
    CircularDLL() {
        head = NULL;
    }

    // Insert at Beginning
    void insertBegin(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            head->next = head;
            head->prev = head;
            return;
        }

        Node* last = head->prev;

        newNode->next = head;
        newNode->prev = last;

        last->next = newNode;
        head->prev = newNode;

        head = newNode;
    }

    // Insert at End
    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            head->next = head;
            head->prev = head;
            return;
        }

        Node* last = head->prev;

        last->next = newNode;
        newNode->prev = last;

        newNode->next = head;
        head->prev = newNode;
    }

    // Count Nodes
    int countNodes() {
        if (head == NULL)
            return 0;

        int count = 0;
        Node* temp = head;

        do {
            count++;
            temp = temp->next;
        } while (temp != head);

        return count;
    }

    // Insert at Position
    void insertAtPosition(int pos, int val) {
        int n = countNodes();

        if (pos < 1 || pos > n + 1) {
            cout << "Invalid Position\n";
            return;
        }

        if (pos == 1) {
            insertBegin(val);
            return;
        }

        if (pos == n + 1) {
            insertEnd(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 1; i < pos - 1; i++)
            temp = temp->next;

        newNode->next = temp->next;
        newNode->prev = temp;

        temp->next->prev = newNode;
        temp->next = newNode;
    }

    // Delete from Beginning
    void deleteBegin() {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node* last = head->prev;
        Node* temp = head;

        head = head->next;

        last->next = head;
        head->prev = last;

        delete temp;
    }

    // Delete from End
    void deleteEnd() {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node* last = head->prev;
        Node* secondLast = last->prev;

        secondLast->next = head;
        head->prev = secondLast;

        delete last;
    }

    // Delete by Value
    void deleteValue(int val) {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        Node* temp = head;

        do {
            if (temp->data == val) {

                if (temp == head) {
                    deleteBegin();
                    return;
                }

                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;

                delete temp;
                cout << "Deleted\n";
                return;
            }

            temp = temp->next;
        } while (temp != head);

        cout << "Value Not Found\n";
    }

    // Search
    void search(int key) {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        int pos = 1;
        Node* temp = head;

        do {
            if (temp->data == key) {
                cout << "Found at Position " << pos << endl;
                return;
            }

            pos++;
            temp = temp->next;

        } while (temp != head);

        cout << "Not Found\n";
    }

    // Display Forward
    void displayForward() {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        Node* temp = head;

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }

    // Display Backward
    void displayBackward() {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        Node* temp = head->prev;

        do {
            cout << temp->data << " ";
            temp = temp->prev;
        } while (temp != head->prev);

        cout << endl;
    }
};

int main() {
    CircularDLL cdll;

    cdll.insertEnd(10);
    cdll.insertEnd(20);
    cdll.insertEnd(30);
    cdll.insertBegin(5);

    cout << "Forward: ";
    cdll.displayForward();

    cout << "Backward: ";
    cdll.displayBackward();

    cdll.insertAtPosition(3, 15);

    cout << "After Position Insert: ";
    cdll.displayForward();

    cdll.deleteBegin();
    cout << "After Delete Begin: ";
    cdll.displayForward();

    cdll.deleteEnd();
    cout << "After Delete End: ";
    cdll.displayForward();

    cdll.deleteValue(15);
    cout << "After Delete Value: ";
    cdll.displayForward();

    cdll.search(20);

    cout << "Total Nodes: " << cdll.countNodes() << endl;

    return 0;
}