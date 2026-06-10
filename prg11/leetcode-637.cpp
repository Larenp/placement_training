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
    vector<vector<int>> res;
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            vector<int> levels;
            for (int i = 0; i < n; i++) {
                TreeNode* current = q.front();
                q.pop();
                levels.push_back(current->val);
                if (current->left)
                    
                q.push(current->left);
                if (current->right)
                    
                q.push(current->right);
            }
            res.push_back(levels);
        }
        vector<double> final;
        
          
        for (int i = 0; i < res.size(); i++) {
            double temp = 0;
            for (int j = 0; j < res[i].size(); j++) {
              
                temp += res[i][j];
            }
            final.push_back(temp / res[i].size());
        }
        return final;
    }
};