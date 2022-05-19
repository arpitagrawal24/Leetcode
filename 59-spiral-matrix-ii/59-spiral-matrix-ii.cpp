class Solution
{
    public:
        vector<vector < int>> generateMatrix(int n)
        {
            vector<vector < int>> v1;
            int v[n][n];
            int a = 0, b = n - 1;
            int x = 1;
            int i = a, j = a;
            while (a < b)
            {
                if (i == a && j == a)
                {
                    for (; j <= b; j++)
                    {
                        v[i][j] = x;
                        x++;
                    }
                    j--;
                }
                if (i == a && j == b)
                {
                    i++;
                    for (; i <= b; i++)
                    {
                        v[i][j] = x;
                        x++;
                    }
                    i--;
                }
                if (i == b && j == b)
                {
                    j--;
                    for (; j >= a; j--)
                    {
                        v[i][j] = x;
                        x++;
                    }
                    j++;
                }
                if (i == b && j == a)
                {
                    i--;
                    for (; i >= a + 1; i--)
                    {
                        v[i][j] = x;
                        x++;
                    }
                    i++;
                    j++;
                }
                a++;
                b--;
            }
            if (n % 2 == 1)
            {
                v[i][i] = x;
            }

            for (int i = 0; i < n; i++)
            {
                vector<int> v2;
                for (int j = 0; j < n; j++)
                {
                    cout << v[i][j] << " ";
                    v2.push_back(v[i][j]);
                }
                v1.push_back(v2);
                cout << endl;
            }
            return v1;
        }
};