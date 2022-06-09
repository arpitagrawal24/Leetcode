class Solution
{
    public:
        vector<int> partitionLabels(string s)
        {

            map<char,int>m;
            vector<int> v;
            
            for(int i = 0 ; i < s.length(); i++)
                m[s[i]] = i+1; // last position of ecch element
            
            int ptr = 0 , loc = 0;
            
            for(int i = 0 ; i < s.length() ; i++)
            {
                ptr = max(ptr, m[s[i]]);
                if(ptr == (i+1))
                {
                    v.push_back(ptr - loc);
                    loc = ptr;
                }
            }
            return v;
        }
};