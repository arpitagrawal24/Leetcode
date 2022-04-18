class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int p = 0;
            int mi = INT_MAX;
            for(int i = 0 ; i < prices.size() ; i++)
            {
                if(mi > prices[i])
                    mi = prices[i];
                else
                    p = max(p ,prices[i] - mi);
            }
            return p;
        }
};