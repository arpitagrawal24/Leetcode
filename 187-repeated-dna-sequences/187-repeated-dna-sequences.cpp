class Solution
{
    public:
        vector<string> findRepeatedDnaSequences(string s)
        {
            unordered_set<string> m, k;
            for (int i = 0, j = 9; j < s.length(); i++, j++)
            {
                string n = s.substr(i, 10);
                if (m.find(n) == m.end())	// true if that element is not found in set
                    
                    m.insert(n);	// store all the distinct elements one time
                
                else
                
                    k.insert(n);	// store the duplicate elemnts
                
            }
            vector<string> ans;
            
            for (auto &i: k)
                ans.push_back(i);
            
            return ans;
        }
};