class Solution {
public:
    int solve(int i,int target,vector<int>& arr) {
        if (i == arr.size()) {
            return (target == 0);
        }
        int add = solve(i+1,target-arr[i],arr);
        int subs = solve(i+1,target+arr[i],arr);
        return add + subs;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(0,target,nums);
    }
};