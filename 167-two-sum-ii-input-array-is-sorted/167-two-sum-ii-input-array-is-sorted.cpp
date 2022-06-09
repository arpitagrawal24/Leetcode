class Solution {
public:
    vector<int> twoSum(vector<int>& no, int target) {
        vector<int> v(2);
        int l = 0;
        int r = no.size() - 1;
        while(l < r)
        {
            if(no[l] + no[r] == target)
            {
                v[0] = l+1;
                v[1] = r+1;
                break;
            }
            else if(no[l] + no[r] < target) l++;
            else r--;
        }
        return v;
    }
};