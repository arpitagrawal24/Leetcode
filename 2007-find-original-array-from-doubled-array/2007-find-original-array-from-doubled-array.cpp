class Solution
{
    public:
        vector<int> findOriginalArray(vector<int> &changed)
        {
            unordered_map<int, int> m;
            vector<int> v, dummy;
            if (changed.size() &1)
                return dummy;
            sort(changed.begin(), changed.end());
            for (auto &i: changed)
            {
               	// cout << i << " ";
                m[i]++;
            }
            for (auto &i: changed)
            {
                if (i == 0 and m[0] >= 2)
                {
                    m[0] -= 2;
                    v.push_back(i);
                }
                else if (i > 0 and m[i *2] > 0 and m[i] > 0)
                {
                    v.push_back(i);
                    m[i *2]--;
                    m[i]--;
                }
            }
            if (v.size() == changed.size() / 2)
                return v;
            else
                return dummy;
        }
};