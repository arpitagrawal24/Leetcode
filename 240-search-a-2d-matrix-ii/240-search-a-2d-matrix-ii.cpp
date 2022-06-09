class Solution
{
    public:
        bool searchMatrix(vector<vector < int>> &matrix, int target)
        {
            int row = matrix.size();
            int col = matrix[0].size();

            if (row == 0 || col == 0)
                return false;

           	//set pointers to bottom left corner can be done with (0,col)

            int i = row - 1;
            int j = 0;

            while (i >= 0 && j < col)
            {

                if (matrix[i][j] == target)
                    return true;

                if (matrix[i][j] > target)
                    i--;

                else
                    j++;
            }

            return false;
        }
};