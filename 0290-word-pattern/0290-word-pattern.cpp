class Solution
{
    public:
        bool wordPattern(string pattern, string s)
        {
            stringstream line(s);
            string token;
            int i = 0;
            int len = pattern.length();
            unordered_map<char, string> cMap;
            unordered_map<string, char> sMap;

            vector<string> tokenList;

            while (line >> token)
            {
                tokenList.push_back(token);
            }

            if (len != tokenList.size())
                return false;

            for (int i = 0; i < len; i++)
            {
                auto cIt = cMap.find(pattern[i]);
                auto sIt = sMap.find(tokenList[i]);
                if ((cIt == cMap.end()) && (sIt == sMap.end()))
                {
                    cMap[pattern[i]] = tokenList[i];
                    sMap[tokenList[i]] = pattern[i];
                }
                else
                {
                    if ((cIt == cMap.end()) || (sIt == sMap.end()))
                    {
                        return false;
                    }
                    else if (cIt->second != tokenList[i] || sIt->second != pattern[i])
                    {
                        return false;
                    }
                }
            }
            return true;
        }
};