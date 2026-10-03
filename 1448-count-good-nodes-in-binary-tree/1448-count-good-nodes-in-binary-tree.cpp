class Solution {
public:
    int bfs(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        queue<pair<TreeNode*, int>> q;
        q.push({root, root->val});
        int cnt = 0;
        while (!q.empty()) {
            size_t size = q.size();
            while (size--) {
                TreeNode* curr = q.front().first;
                int mx = q.front().second;
                q.pop();
                if (curr->val >= mx) {
                    cnt++;
                }
                mx = max(mx, curr->val);
                if (curr->left != NULL) {
                    q.push({curr->left, mx});
                }
                if (curr->right != NULL) {
                    q.push({curr->right, mx});
                }
            }
        }
        return cnt;
    }
    int goodNodes(TreeNode* root) { return bfs(root); }
};