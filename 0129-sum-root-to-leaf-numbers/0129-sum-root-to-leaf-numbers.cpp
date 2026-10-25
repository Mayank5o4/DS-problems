class Solution {
public:
    int dfs(TreeNode* root, int num) {
        if (root == NULL) {
            return 0;
        }
        num = num * 10 + root->val;
        if (root->left != NULL || root->right != NULL) {
            return dfs(root->left, num) + dfs(root->right, num);
        }
        return num;
    }
    int sumNumbers(TreeNode* root) { return dfs(root, 0); }
};