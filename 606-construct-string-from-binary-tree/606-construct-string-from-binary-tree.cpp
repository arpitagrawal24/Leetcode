/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        string s = "";
    
        void Preorder(struct TreeNode *node)
        {
            if (node == NULL)
            {
                return;
            }
            s += to_string(node->val);
            if (node->right != NULL or node->left != NULL)
            {
                s += "(";
                Preorder(node->left);
                s += ")";
            }
            if (node->right != NULL)
            {
                s += "(";
                Preorder(node->right);
                s += ")";
            }
        }

        string tree2str(TreeNode *root)
        {
            Preorder(root);
            cout << endl;
            return s;
        }
};