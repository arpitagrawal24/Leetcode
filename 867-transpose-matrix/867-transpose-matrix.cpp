class Solution
{
    public:
        vector<vector < int>> transpose(vector<vector < int>> &matrix)
        {
            vector<vector < int>> v;
            for (int j = 0; j < matrix[0].size(); j++)
            {
                vector<int> v1(matrix.size());
                for (int i = 0; i < matrix.size(); i++)
                {
                   	// cout<<matrix[i][j]<<" ";
                    v1[i] = matrix[i][j];
                }
               	// cout<<endl;
                v.push_back(v1);
            }
            return v;
        }
};