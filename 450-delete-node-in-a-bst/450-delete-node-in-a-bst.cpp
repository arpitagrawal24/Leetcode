/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    TreeNode* findMax(TreeNode *root)
    {
        if (root == NULL) return NULL;
        TreeNode *mx = root;
        TreeNode *l = findMax(root->left), *r = findMax(root->right);
        if (l != NULL && l->val > mx->val) mx = l;
        if (r != NULL && r->val > mx->val) mx = r;
        return mx;
    }
    public:
        TreeNode* deleteNode(TreeNode *root, int key)
        {
            if (root == NULL) return NULL;
            if (root->val == key)
            {
                if (root->left == NULL) return root->right;
                if (root->right == NULL) return root->left;
                TreeNode *mx = findMax(root->left);
                swap(root->val, mx->val);
                root->left = deleteNode(root->left, key);
            }
            else
            {
                root->left = deleteNode(root->left, key);
                root->right = deleteNode(root->right, key);
            }
            return root;
        }
};