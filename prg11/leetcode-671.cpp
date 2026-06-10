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
 void inorder(TreeNode* root, set<int>& res){
    if(root== nullptr){
        return;
    }
    inorder(root->left,res);
    res.insert(root->val);
      inorder(root->right,res);

 }
class Solution {
public:

    int findSecondMinimumValue(TreeNode* root) {
    set<int>res;
    inorder(root,res);
    if(res.size()<2){
        return -1;
    }
    vector<int>x(res.begin(),res.end());
   
  return x[1];  }
};