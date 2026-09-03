
class Solution {
public:
    int bfs(TreeNode* root) {
        int levels = 0;
        if (root == NULL) {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            size_t size = q.size();
            levels++;
            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                if (curr->left == NULL && curr->right == NULL) {
                    return levels;
                }
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
        }
        return 0;
    }
    int minDepth(TreeNode* root) { return bfs(root); }
};