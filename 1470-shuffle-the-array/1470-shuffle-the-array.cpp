class Solution
{
    public:
        vector<int> shuffle(vector<int> &nums, int n)
        {
            int x = 0;
            vector<int> v(2 *n);
            for (int i = 0; i <  n; i++)
            {
                v[x] = nums[i];
                v[x+1] = nums[i + n];
                x+=2;
            }
            return v;
        }
};