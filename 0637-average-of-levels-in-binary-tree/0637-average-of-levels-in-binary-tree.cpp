class Solution {
public:
    vector<double> res;
    void BFS(TreeNode* root) {
        if (root == NULL)
            return;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            size_t size = q.size();
            size_t n = size;
            double total = 0;

            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                total += curr->val;
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
            res.push_back(total / n);
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        BFS(root);
        return res;
    }
};