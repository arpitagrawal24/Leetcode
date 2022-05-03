class Solution
{
    public:
        int findUnsortedSubarray(vector<int> &nums)
        {
            int n = nums.size();
            int l = -1, r = -1;	// store left &right index of unordered list
            int mn = INT_MAX, mx = INT_MIN;	// stores max &min in nums
            for (int i = 0; i < n; i++)
            {
                mx = max(mx, nums[i]);
                if (mx > nums[i])
                    r = i;
            }

            for (int i = n - 1; i >= 0; i--)
            {
                mn = min(mn, nums[i]);
                if (mn < nums[i])
                    l = i;
            }

            if (l == r) return 0;	// sorted
            return r - l + 1;
        }
};