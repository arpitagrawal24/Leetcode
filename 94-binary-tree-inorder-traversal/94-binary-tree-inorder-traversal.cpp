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
    public:
        vector<int> v;

    void inTraversal(TreeNode *node)
    {
        if (!node) return;
        else
        {
            inTraversal(node->left);
            v.push_back(node->val);
            inTraversal(node->right);
        }
    }

    vector<int> inorderTraversal(TreeNode *root)
    {
        inTraversal(root);
        return v;
    }
};