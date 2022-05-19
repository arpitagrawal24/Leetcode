typedef long long ll;

class Solution
{
    public:
        ll c(ll n, ll k)
        {
            ll res = 1;
            if (k > n - k) k = n - k;
            for (ll i = 0; i < k; ++i)
            {
                res *= (n - i);
                res /= (i + 1);
            }
            return res;
        }
    vector<int> getRow(int rowIndex)
    {
        vector<int> v;
        for (ll j = 0; j <= rowIndex; j++)
        {
            v.push_back(c(rowIndex, j));
        }
        return v;
    }
};