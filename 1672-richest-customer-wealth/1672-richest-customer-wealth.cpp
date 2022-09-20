class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0, res = 0;
        for(auto &customer : accounts)
        {
            sum = 0;
            for(auto &i : customer)
            {
                sum += i;
            }
            res = max(res,sum);
        }
        return res;
    }
};