class Solution {
public:
    bool helper(TreeNode* root, int sum, int& targetSum) {
        if (root == NULL) {
            return false;
        }
        sum += root->val;
        if (root->left == NULL && root->right == NULL) {
            if (sum == targetSum) {
                return true;
            }
            return false;
        }
        bool lside = helper(root->left, sum, targetSum);
        bool rside = helper(root->right, sum, targetSum);
        return lside || rside;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        bool ans = helper(root, sum, targetSum);
        return ans;
    }
};