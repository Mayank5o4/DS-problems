class Solution {
public:
    int bfs(TreeNode* root) {
        if (!root) {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int sum = 0;
        while (!q.empty()) {
            size_t size = q.size();
            sum = 0;
            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                sum += curr->val;
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
        }
        return sum;
    }
    int deepestLeavesSum(TreeNode* root) { return bfs(root); }
};