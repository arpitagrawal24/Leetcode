class Solution
{
    public:
        vector<int> productExceptSelf(vector<int> &nums)
        {
            int product = 1, count = 0;
            vector<int> v;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] != 0)
                {
                    product *= nums[i];
                    continue;
                }
                count++; //for zero
            }
            for (int i = 0; i < nums.size(); i++)
            {
                if (count == 0) // no zero
                {
                    v.push_back(product / nums[i]);
                    continue;
                }
                else if (count == 1) // one zero
                {
                    if (nums[i] == 0)
                        v.push_back(product);
                    else
                        v.push_back(0);
                }
                else // more than one zero
                    v.push_back(0);
            }
            return v;
        }
};