class Solution {
public:
    void dfs(TreeNode* root, string path, vector<string>& res) {
        if (root == NULL) {
            return;
        }
        path += to_string(root->val);
        if ((root->left == NULL) && (root->right == NULL)) {
            res.push_back(path);
            return;
        }
        path += "->";
        dfs(root->left, path, res);
        dfs(root->right, path, res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> vec;
        string path = "";
        if (root == NULL) {
            return vec;
        }
        dfs(root, path, vec);
        return vec;
    }
};