class Solution {
public:
    bool bfs(TreeNode* root, int target) {

        if (root == nullptr)
            return false;

        queue<pair<TreeNode*, int>> q;
        q.push({root, root->val});

        while (!q.empty()) {

            auto [current, sum] = q.front();
            q.pop();

            if (current->left == nullptr && current->right == nullptr) {

                if (sum == target)
                    return true;
            }

            if (current->left) {
                q.push({current->left, sum + current->left->val});
            }

            if (current->right) {
                q.push({current->right, sum + current->right->val});
            }
        }

        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return bfs(root, targetSum);
    }
};