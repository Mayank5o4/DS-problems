class Solution {
public:
    int maxDepth(TreeNode* root) {
        int levels = 0;
        if (root == NULL)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            size_t size = q.size();
            levels++;
            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
        }
        return levels;
    }
};