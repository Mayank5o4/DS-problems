class Solution {
public:
    int maximal(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int mx = INT_MIN, levels = 0, mxlevel = 0;
        while (!q.empty()) {
            int size = q.size();
            int sum = 0;
            levels++;
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
            if (sum > mx) {
                mx = sum;
                mxlevel = levels;
            }
        }
        return mxlevel;
    }
    int maxLevelSum(TreeNode* root) { return maximal(root); }
};