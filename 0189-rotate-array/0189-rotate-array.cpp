class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        // reverse v
        reverse(nums.begin(),nums.end());               // 7 6 5 4 3 2 1
        // reverse first k
        reverse(nums.begin(),nums.begin()+k);           // 6 7 5 4 3 2 1
        // reverse last n-k 
        reverse(nums.begin()+k,nums.end());             // 6 7 1 2 3 4 5
    }
};