class Solution {
public:
    int chori(int idx, vector<int>& nums, vector<int>& dp) {
        int n = nums.size();
        if (idx >= n)
            return 0;
        if (dp[idx] != -1)
            return dp[idx];
        int pick = nums[idx] + chori(idx + 2, nums, dp);
        int skip = chori(idx + 1, nums, dp);
        return dp[idx] = max(pick, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return chori(0, nums, dp);
    }
};

