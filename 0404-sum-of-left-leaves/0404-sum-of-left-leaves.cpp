class Solution {
public:
    int bfs(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int sum = 0;
        while (!q.empty()) {
            size_t size = q.size();

            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                if (curr->left != NULL) {
                    if (curr->left->left == NULL && curr->left->right == NULL)
                        sum += curr->left->val;
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
        }
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) { return bfs(root); }
};