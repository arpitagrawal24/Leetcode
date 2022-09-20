class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {
            int n = nums.size(), x = 0;
            unordered_map<int,int> m;
            for (int i = 0; i < n; i++)
            {
                if(m.find(nums[i]) == m.end())
                {
                    m[nums[i]] = 1;
                    nums[x] = nums[i];
                    x++;
                }
            }
            return x;
        }
};