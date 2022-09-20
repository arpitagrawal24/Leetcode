class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {
            int n = nums.size(), res = 0, curr = nums[0];
            for (int i = 1; i < n; i++)
            {

                if (curr != nums[i])
                {
                    nums[++res] = nums[i];
                    curr = nums[i];
                }
            }
            return res + 1;
        }
};