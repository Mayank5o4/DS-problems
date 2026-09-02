class Solution {
public:
    vector<int> res;
    vector<int> maxEle(TreeNode* root) {
        if (root == NULL) {
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            int mx = INT_MIN;
            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                mx = max(mx, curr->val);
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
            res.push_back(mx);
        }
        return res;
    }
    vector<int> largestValues(TreeNode* root) { return maxEle(root); }
};