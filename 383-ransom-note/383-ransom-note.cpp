class Solution
{
    public:
        bool canConstruct(string ransomNote, string magazine)
        {
            map<char, int> m1, m2;
            for(auto &i : ransomNote)
            {
                m1[i]++;
            }
            for(auto &i : magazine)
            {
                m2[i]++;
            }
            for(int i = 0 ; i < ransomNote.size() ; i++)
            {
                
                if(m1[ransomNote[i]] > m2[ransomNote[i]])
                    return false;
            }
            return true;
        }
};