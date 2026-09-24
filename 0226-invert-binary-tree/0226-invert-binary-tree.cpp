class Solution {
public:
    void bfs(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            size_t size = q.size();
            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                swap(curr->left, curr->right);
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        bfs(root);
        return root;
    }
};