class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

        if (root == nullptr)
            return {};

        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int n = q.size();
            vector<int> level;

            for (int i = 0; i < n; i++) {

                TreeNode* current = q.front();
                q.pop();

                level.push_back(current->val);

                if (current->left)
                    q.push(current->left);

                if (current->right)
                    q.push(current->right);
            }

            res.push_back(level);
        }

        vector<int> res2;

        for (int i = 0; i < res.size(); i++) {
            res2.push_back(res[i].back());
        }

        return res2;
    }
};