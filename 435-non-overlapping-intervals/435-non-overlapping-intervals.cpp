class Solution
{
    public:
        int eraseOverlapIntervals(vector<vector < int>> &intervals)
        {
            sort(intervals.begin(), intervals.end());
            int c = 0;
           	// for (auto &i: intervals)
           	// {
           	//     for (auto &j: i)
           	//         cout << j << " ";
           	//     cout << endl;
           	// }
            vector<vector < int>> ans = { intervals[0]
            };
            for (int i = 1; i < intervals.size(); i++)
            {
                if (intervals[i][0] >= ans.back()[1])	// intervals can't be merged
                {
                    ans.back() = intervals[i];
                }
                else
                {
                    ans.back()[1] = min(ans.back()[1], intervals[i][1]);
                    c++;
                }	// intervals can be merged
            }
            return c;
        }
};