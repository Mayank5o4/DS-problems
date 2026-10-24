class Solution {
public:
    bool bfs(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool null = false;
        while (!q.empty()) {
            size_t size = q.size();
            vector<TreeNode*> ans;
            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                if (!curr) {
                    null = true;
                } else {
                    if (null) {
                        return false;
                    }
                    q.push(curr->left);
                    q.push(curr->right);
                }
            }
        }
        return true;
    }
    bool isCompleteTree(TreeNode* root) { return bfs(root); }
};