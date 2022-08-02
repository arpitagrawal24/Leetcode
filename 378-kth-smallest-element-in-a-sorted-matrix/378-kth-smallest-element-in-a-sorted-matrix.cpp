class Solution
{
    public:
        int kthSmallest(vector<vector < int>> &matrix, int k)
        {
            int count = 1;
            vector<int> v;
            for (auto &arr: matrix)
            {
                for (auto &i: arr)
                {
                    v.push_back(i);
                }
            }
            sort(v.begin(), v.end());

            return v[k - 1];
        }
};