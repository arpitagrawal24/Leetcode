class Solution
{
    public:

        bool isValidSudoku(vector<vector < char>> &board)
        {
            unordered_map<char, int> count;

           	//Check rows
            for (int i = 0; i < board.size(); i++)
            {
                count = {};
                for (int j = 0; j < board[i].size(); j++)
                {
                    if (count[board[i][j]] >= 1)
                    {
                        // cout << "r";
                        return false;
                    }
                    else if (board[i][j] != '.')
                    {
                        count[board[i][j]]++;
                    }
                }
            }

            for (int i = 0; i < board.size(); i++)
            {
                count = {};
                for (int j = 0; j < board[i].size(); j++)
                {
                    if (board[j][i] != '.')
                    {
                        count[board[j][i]]++;
                    }
                    if (count[board[j][i]] > 1)
                    {
                        // cout << "c";
                        return false;
                    }
                }
            }

            for (int i = 0; i < board.size(); i++)
            {
                count = {};
                for (int j = i - (i % 3); j < i - (i % 3) + 3; j++)
                {
                    for (int k = 3 *(i % 3); k < 3 *(i % 3) + 3; k++)
                    {
                        if (board[j][k] != '.')
                        {
                            count[board[j][k]]++;
                        }
                        if (count[board[j][k]] > 1)
                        {
                            return false;
                        }
                        // cout<<board[j][k] <<" -> i: "<<i <<" j: "<<j <<" k: "<<k<<endl;
                    }
                }
                // cout<<endl;
            }

            return true;
        }
};