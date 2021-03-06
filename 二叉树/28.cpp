/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
   public:
    bool isSymmetric(TreeNode* root) {
        //这样能解决NULL
        return check(root, root);
    }

    bool check(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }
        if (p == NULL || q == NULL) {
            return false;
        }
        return p->val == q->val && check(p->left, q->right) &&
               check(p->right, q->left);
    }
};