class Solution {
public:
    bool tree(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL && root2 == NULL) {
            return true;
        }
        if (root1 == NULL || root2 == NULL) {
            return false;
        }
        queue<TreeNode*> q1, q2;
        q1.push(root1);
        q2.push(root2);
        while (!q1.empty() && !q2.empty()) {
            TreeNode* curr1 = q1.front();
            q1.pop();
            TreeNode* curr2 = q2.front();
            q2.pop();
            if (curr1->val != curr2->val) {
                return false;
            }
            if (curr1->left != NULL && curr2->left != NULL) {
                q1.push(curr1->left);
                q2.push(curr2->left);
            } else if (curr1->left != NULL || curr2->left != NULL) {
                return false;
            }

            if (curr1->right != NULL && curr2->right != NULL) {
                q1.push(curr1->right);
                q2.push(curr2->right);
            } else if (curr1->right != NULL || curr2->right != NULL) {
                return false;
            }
        }
        return q1.empty() && q2.empty();
    }
    bool isSameTree(TreeNode* p, TreeNode* q) { return tree(p, q); }
};