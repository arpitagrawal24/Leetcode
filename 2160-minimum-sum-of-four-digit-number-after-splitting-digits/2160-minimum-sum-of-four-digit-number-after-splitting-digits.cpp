class Solution
{
    public:
        int minimumSum(int n)
        {
            multiset<int> m;
            int n1 = 0, n2 = 0;
            bool flag = true;
            while (n > 0)
            {
                if (n % 10 != 0)
                    m.insert(n % 10);
                n /= 10;
            }
            for (auto &i: m)
            {
                // cout << i<<" ";
                if (flag)
                {
                    n1 = n1 * 10 + i;
                    flag = false;
                }
                else
                {
                    n2 = n2 * 10 + i;
                    flag = true;
                }
            }
            return n1 + n2;
        }
};