class Solution
{
    public:
        int majorityElement(vector<int> &nums)
        {
            map<int ,int> m;
            int n = nums.size();
            for(auto &i : nums)
            {
                m[i]++;
            }
            cout<<n;
            for(auto &[x,y] : m)
            {
                if(y > n/2)
                    return x;
            }
            return NULL;
        }
};