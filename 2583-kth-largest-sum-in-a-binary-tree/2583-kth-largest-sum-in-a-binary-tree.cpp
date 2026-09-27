class Solution {
public:
    long long bfs(TreeNode* root, int k) {
        typedef long long ll;
        vector<ll> vec;
        if (root == NULL) {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            size_t size = q.size();
            ll sum = 0;

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
            vec.push_back(sum);
        }
        if (vec.size() < k)
            return -1;
        sort(rbegin(vec), rend(vec));
        return vec[k - 1];
    }
    long long kthLargestLevelSum(TreeNode* root, int k) { return bfs(root, k); }
};