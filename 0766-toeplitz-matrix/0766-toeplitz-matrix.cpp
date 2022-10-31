class Solution
{
    public:
        bool isToeplitzMatrix(vector<vector < int>> &matrix)
        {
            int n = matrix.size();
            int m = matrix[0].size();

            for (int i = 0; i < m or i < n; i++)
            {
                int x = 0, y = i;
                if (i < m)
                {
                    int z = matrix[x][y];
                    while (x < n and y < m)
                    {
                        if (z != matrix[x][y])
                            return false;
                        x++;
                        y++;
                    }
                }

                x = i, y = 0;
                if (i < n)
                {
                    int z = matrix[x][y];
                    while (x < n and y < m)
                    {
                        if (z != matrix[x][y])
                            return false;
                        x++;
                        y++;
                    }
                }
            }
            return true;
        }
};