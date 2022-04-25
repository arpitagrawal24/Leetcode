class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            map<char,int>m1,m2;
            if(s.size() != t.size())
                return false;
            for(auto &i : s)
            {
                m1[i]++;
            }
            for(auto &i : t)
            {
                m2[i]++;
            }
            for(auto &i : s)
            {
                if(m1[i] != m2[i])
                    return false;
            }
            return true;
        }
};