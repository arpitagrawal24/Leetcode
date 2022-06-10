/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
    int n;

    TreeNode* sortedArrayToBST(vector<int> &nums)
    {

        n = nums.size() - 1;
        TreeNode *tree = NULL;
        tree = make_bst(nums, tree, 0, n);
        return tree;
    }

    TreeNode* make_bst(vector<int> &nums, TreeNode *tree, int start, int end)
    {
        if (start > end || start < 0 || end > n) return NULL;

        int mid = (start + end) / 2;
        tree = new TreeNode(nums[mid]);

        tree->left = make_bst(nums, tree->left, start, mid - 1);
        tree->right = make_bst(nums, tree->right, mid + 1, end);
        return tree;
    }
};