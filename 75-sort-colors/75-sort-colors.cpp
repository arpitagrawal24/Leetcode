class Solution
{
    public:
        void sortColors(vector<int> &nums)
        {
            int a = 0, b = 0, c = 0;
            for (auto &i: nums)
            {
                if (i == 0) a++;
                else if (i == 1) b++;
                else if (i == 2) c++;
            }
            int x = 0;
            while (a)
            {
                nums[x] = 0;
                x++;
                a--;
            }
            while (b)
            {
                nums[x] = 1;
                x++;;
                b--;
            }
            while (c)
            {
                nums[x] = 2;
                x++;
                c--;
            }
        }
};