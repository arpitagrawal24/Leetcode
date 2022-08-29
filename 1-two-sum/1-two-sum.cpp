class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            int x = 0;
            vector<int> v(2);
            unordered_map<int,int> m;
            for(auto &i : nums)
            {
                if(m.find(target-i)!=m.end())
                {
                    v[0] = x;
                    v[1] = m[target-i];
                }
                m[i] = x;
                x++;
            }
            return v;
        }
};