typedef long long ll;

class Solution
{
    public:
        void rotate(vector<vector < int>> &matrix)
        {
            trans(matrix);
            reflect(matrix);
        }

        void trans(vector<vector < int>> &m)
        {
            for (int i = 0; i < m.size(); i++)
            {
                for (int j = i + 1; j < m.size(); j++)
                {
                    int tmp = m[i][j];
                    m[i][j] = m[j][i];
                    m[j][i] = tmp;
                }
            }
        }

        void reflect(vector<vector < int>> &m)
        {
            for (int i = 0; i < m.size(); i++)
            {
                for (int j = 0; j < m.size() / 2; j++)
                {
                    int tmp = m[i][j];
                    m[i][j] = m[i][m.size() - j - 1];
                    m[i][m.size() - j - 1] = tmp;
                }
            }
        }
};