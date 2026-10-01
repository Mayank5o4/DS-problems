class Solution {
public:
    void bfs(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        int lvl = 0;
        while (!q.empty()) {
            size_t size = q.size();
            vector<TreeNode*> ans;
            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                ans.push_back(curr);
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
            if (lvl % 2 != 0) {
                size_t n = ans.size();
                int i = 0, j = n - 1;
                while (i <= j) {
                    swap(ans[i++]->val, ans[j--]->val);
                }
            }
            lvl++;
        }
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        bfs(root);
        return root;
    }
};