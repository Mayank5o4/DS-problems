class Solution {
public:
    vector<vector<int>> res;
    void BFS(TreeNode* root) {
        if (root == NULL)
            return;
        queue<TreeNode*> q;
        q.push(root);
        int levelNo = 0;
        while (!q.empty()) {
            size_t size = q.size();
            vector<int> level;
            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                level.push_back(curr->val);
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
            if (levelNo % 2 != 0) {
                reverse(level.begin(), level.end());
            }
            res.push_back(level);
            levelNo++;
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        BFS(root);
        return res;
    }
};