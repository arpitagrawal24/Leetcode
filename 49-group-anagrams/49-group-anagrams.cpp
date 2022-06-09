class Solution
{
    public:
        vector<vector < string>> groupAnagrams(vector<string> &strs)
        {
            map<string, vector<string>> m;
            vector<vector < string>> ans;
            
            for (auto &i: strs)
            {
                string a = i;
                sort(i.begin(), i.end());
                m[i].push_back(a);
            }
            
            for(auto &[x,y] : m)
            {
                ans.push_back(y);
            }
            
            return ans;
        }
};