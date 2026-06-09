/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root ==nullptr ){
            return 0;
        }
    return 1+ max(maxDepth(root->left),maxDepth(root->right));
        
    }
};
/*

int left=maxdepth(root->left);
int right=maxdepth(root->left);
int res=1+max(left,right);

return res;
*/
/*
maxDepth(3)
├── maxDepth(9)
│   ├── maxDepth(NULL) = 0
│   └── maxDepth(NULL) = 0
│   => 1
└── maxDepth(20)
    ├── maxDepth(15)
    │   ├── 0
    │   └── 0
    │   => 1
    └── maxDepth(7)
        ├── 0
        └── 0
        => 1
    => 2

=> 1 + max(1,2) = 3
*/