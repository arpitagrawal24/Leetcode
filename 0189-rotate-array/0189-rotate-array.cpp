class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tmp;
        int n = nums.size();
        if (n == 0 || k == 0) {
            return;
        }
        k = k % n;
        if (k > n)
            return;
        for (int i = n - 1; i >= n - k; i--) {
            tmp.push_back(nums[i]);
        }
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }
        for (int i = k - 1, j = 0; i >= 0; i--, j++) {
            nums[i] = tmp[j];
        }
    }
};