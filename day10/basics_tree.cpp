#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T>* left;
    TreeNode<T>* right;

    TreeNode(T val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
//dfs
// Preorder: Root Left Right
template <typename T>
void preorder(TreeNode<T>* root)
{
    if (root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder: Left Root Right
template <typename T>
void inorder(TreeNode<T>* root)
{
    if (root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder: Left Right Root
template <typename T>
void postorder(TreeNode<T>* root)
{
    if (root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
//bfs
#include <queue>

void bfs(TreeNode<int>* root)
{
    if (root == nullptr) return;

    queue<TreeNode<int>*> q;

    q.push(root);

    while (!q.empty())
    {
        TreeNode<int>* current_node = q.front();
        q.pop();

        cout << current_node->data << " ";

        if (current_node->left)
            q.push(current_node->left);

        if (current_node->right)
            q.push(current_node->right);
    }
}

int main()
{
    TreeNode<int>* root = new TreeNode<int>(1);

    root->left = new TreeNode<int>(2);
    root->right = new TreeNode<int>(3);

    root->left->left = new TreeNode<int>(4);
    root->left->right = new TreeNode<int>(5);

    root->right->left = new TreeNode<int>(6);
    root->right->right = new TreeNode<int>(7);

    cout << "Preorder: ";
    preorder(root);

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nPostorder: ";
    postorder(root);
    
    cout << "\nBfs: ";
    bfs(root);

    return 0;
}
/*

       1
     /   \
    2     3
   / \   / \
  4  5  6   7

Preorder: 1 2 4 5 3 6 7 
Inorder: 4 2 5 1 6 3 7 
Postorder: 4 5 2 6 7 3 1 
bfs=1 2 3 4 5 6 7*/