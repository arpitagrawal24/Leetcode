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
    
    void preTraversal(TreeNode *node)
    {
        if (!node) return;
        else
        {
            v.push_back(node->val);
            preTraversal(node->left);
            preTraversal(node->right);
        }
    }
    
    vector<int> preorderTraversal(TreeNode *root)
    {
        preTraversal(root);
        return v;
    }
};