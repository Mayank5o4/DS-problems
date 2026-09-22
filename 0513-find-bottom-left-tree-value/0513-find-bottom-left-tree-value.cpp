class Solution {
public:
    int nums;
    void bfs(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            size_t size = q.size();
            int i = 0;
            while (i < size) {
                TreeNode* curr = q.front();
                q.pop();
                if (i == 0) {
                    nums = curr->val;
                }
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
                i++;
            }
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        bfs(root);
        return nums;
    }
};