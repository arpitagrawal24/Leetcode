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
            int start = intervals[0][0], end = intervals[0][1];
            for (int i = 1; i < intervals.size(); i++)
            {
                if (intervals[i][0] >= end)	// intervals can't be merged
                {
                    start = intervals[i][0];
                    end = intervals[i][1];
                }
                else
                {
                    end = min(end, intervals[i][1]);
                    c++;
                }	// intervals can be merged
            }
            return c;
        }
};