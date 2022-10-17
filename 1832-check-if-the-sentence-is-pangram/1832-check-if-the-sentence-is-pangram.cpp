class Solution
{
    public:
        bool checkIfPangram(string sentence)
        {
            vector<int> v(26, 1);
            for (auto &i: sentence)
            {
                v[i - 'a'] = 0;
            }
            for (auto &a: v)
            {

                if (a == 1)
                {
                    return 0;
                }
            }
            return 1;
        }
};