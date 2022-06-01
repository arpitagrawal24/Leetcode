class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> v(nums.size());
        int x = 0 , j = 0;
        for(auto &i : nums)
        {
            x += i;
            v[j] = x;
            j++;
        }
        return v;
    }
};