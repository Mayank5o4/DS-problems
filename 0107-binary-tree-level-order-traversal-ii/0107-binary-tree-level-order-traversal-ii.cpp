class Solution {
public:
    vector<vector<int>> res;
    void BFS(TreeNode* root) {
        if (root == NULL)
            return;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            size_t size = q.size();
            vector<int> level;
            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                level.push_back(curr->val);
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
            res.push_back(level);
        }
        reverse(res.begin(), res.end());
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        BFS(root);
        return res;
    }
};