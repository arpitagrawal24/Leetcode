#define ll long long

class Solution
{
    public:
        int mySqrt(int n)
        {
            ll i = 0, j = n, ans;
            while (i <= j)
            {
                ll mid = i + (j - i) / 2;
                if (mid *mid == n)
                    return mid;
                else if (mid * mid < n)
                    {i = mid + 1;
                    ans = mid;}
                else
                    j = mid - 1;
            }
            return ans;
        }
};