class Solution
{
    public:
        int c(int n, int k)
        {
            int res = 1;
            if (k > n - k) k = n - k;
            for (int i = 0; i < k; ++i)
            {
                res *= (n - i);
                res /= (i + 1);
            }
            return res;
            
            
        }
    vector<vector < int>> generate(int numRows)
    {
        vector<vector < int>> v1;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> v;
            for (int j = 0; j <= i; j++)
            {
                v.push_back(c(i, j));
            }
            v1.push_back(v);
        }
        return v1;
    }
};