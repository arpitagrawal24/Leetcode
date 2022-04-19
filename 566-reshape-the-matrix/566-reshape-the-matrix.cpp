class Solution
{
    public:
        vector<vector < int>> matrixReshape(vector<vector < int>> &mat, int r, int c)
        {
            int r1 = mat.size();
            int c1 = mat[0].size();
           	// cout << mat[0].size() << " " << mat.size();
            cout << r << " " << c << endl;
            if ((r1 *c1) == (r *c))
            {
                int x = -1;
                vector<vector < int>> v;
                vector<int> v1;
                for (auto &row: mat)
                {
                    for (auto &i: row)
                    {
                        ++x;
                        v1.push_back(i);
                        
                        cout << i << " " << x << endl;
                        // cout << "v1 -> " ;
                        // for (auto &o: v1)
                        // {
                        //     cout << o << " ";
                        // }
                        // cout << endl;
                        if (x == c-1)
                        {
                            // cout<<"rf";
                            v.push_back(v1);
                            v1.erase(v1.begin() , v1.end());
                            x = -1;
                        }
                    }
                }
                return v;
            }
            else
                return mat;
        }
};