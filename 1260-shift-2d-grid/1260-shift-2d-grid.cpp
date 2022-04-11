class Solution
{
    public:
        vector<vector < int>> shiftGrid(vector<vector < int>> &grid, int k)
        {
            int n = grid.size();
            int m = grid[0].size();
           	cout<< n <<" "<<m<<" ";
            if(n*m < k)
                k  = k%(n*m);
            int x = n *m - k + 1, y = 1;
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (y >= x)
                    {
                        v.push_back(grid[i][j]);
                    }
                    y++;
                }
            }
            y = 1;
            cout << x << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (y < x)
                    {
                        v.push_back(grid[i][j]);
                    }
                    else break;
                    y++;
                }
            }
            y = 0;
            grid.clear();
            for (int i = 0; i < n; i++)
            {
                vector<int> v1;

                for (int j = 0; j < m; j++)
                {
                    v1.push_back(v[y]);
                    y++;
                }
                grid.push_back(v1);
            }
            return grid;
        }
};