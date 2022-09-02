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
        vector<double> averageOfLevels(TreeNode *root)
        {
            double sum = 0, count = 0.00000;

            vector<double> v;
            TreeNode * curr;
            queue<TreeNode*> q;

            if (!root)
                return v;

            q.push(root);
            q.push(NULL);

            while (q.size() > 1)
            {
                curr = q.front();
                q.pop();
                if (curr == NULL)
                {
                    q.push(NULL);
                    // cout << "\n";
                    v.push_back(sum / count);
                    sum = 0;
                    count = 0.00000;
                }
                else
                {
                    // cout << curr->val << " ";
                    sum += curr->val;
                    count++;
                    if (curr->left)
                        q.push(curr->left);
                    if (curr->right)
                        q.push(curr->right);
                }
            }
            v.push_back(sum / count);
            return v;
        }
};