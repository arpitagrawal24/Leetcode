class Solution
{
    public:
        int longestPalindrome(string s)
        {
            map<char, int> m;
            int odd = 0;
            for (auto &i: s)
            {
                m[i]++;
            }
            for (auto &[x, y]: m)
            {
                if (y & 1)
                    odd++;
            }
            return s.size() - odd + (odd > 0);
        }
};