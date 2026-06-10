/*
Binary Tree is a general data structure where nodes can have up
to two children in any order, whereas a Binary Search Tree (BST)
is an ordered binary tree that strictly requires left child values
to be smaller and right child values to be larger than the parent node*/


// binary search tree always inorder form

#include <iostream>
using namespace std;

// Structure for a BST node
struct Node
{
    int data;    // Value stored in the node
    Node *left;  // Pointer to left child
    Node *right; // Pointer to right child

    // Constructor to initialize a node
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a value into the BST
Node *insert(Node *root, int val)
{

    // If tree/subtree is empty, create a new node
    if (root == nullptr)
        return new Node(val);

    // Insert into left subtree if value is smaller
    if (val < root->data)
        root->left = insert(root->left, val);

    // Insert into right subtree if value is greater
    else if (val > root->data)
        root->right = insert(root->right, val);

    // Return the unchanged root pointer
    return root;
}

// Function to search for a key in the BST
bool search(Node *root, int key)
{

    // Key not found
    if (root == nullptr)
        return false;

    // Key found
    if (root->data == key)
        return true;

    // Search in left subtree
    if (key < root->data)
        return search(root->left, key);

    // Search in right subtree
    return search(root->right, key);
}

// Inorder Traversal: Left -> Root -> Right
// Produces sorted order in a BST
void inorder(Node *root)
{

    // Base case
    if (root == nullptr)
        return;

    inorder(root->left);       // Visit left subtree
    cout << root->data << " "; // Print current node
    inorder(root->right);      // Visit right subtree
}

void preorder(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void bfs(Node *root)
{
    if (root == nullptr)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left)
            q.push(current->left);

        if (current->right)
            q.push(current->right);
    }
}

int main()
{

    // Initially tree is empty
    Node *root = nullptr;

    // Insert nodes into BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    // Print BST in sorted order
    cout << "Inorder Traversal: " << endl;
    inorder(root);
    cout << endl;
    cout << "Preorder Traversal: ";
    cout << endl;
    preorder(root);
    cout << endl;
    // Search for a value
    cout << "\nSearch 60: ";
    cout << (search(root, 60) ? "Found" : "Not Found");

    return 0;
}