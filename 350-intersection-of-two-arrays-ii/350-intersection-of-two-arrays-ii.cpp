class Solution
{
    public:
        vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
        {
            vector<int> v;
            map<int , int> m;
            for(auto &i : nums1)
            {
                m[i]++;
            }
            for(auto &i : nums2)
            {
                if(m[i] > 0)
                {
                    m[i]--;
                    v.push_back(i);
                }
            }
            return v;
        }
};