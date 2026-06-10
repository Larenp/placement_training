/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    void inorder(TreeNode* root) {

        isValidBST(root->left);
        res.push_back(root->val);
        isValidBST(root->right);
    }
    bool isValidBST(TreeNode* root) {

        if (root == nullptr) {
            return true;
        }
        inorder(root);

        for (int i = 1; i < res.size(); i++) {
            if (res[i] <= res[i - 1]) {
                return false;
            }
        }
        return true;
    }
};