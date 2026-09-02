1class Solution {
2public:
3    int maximumGap(vector<int>& nums) {
4        if(nums.size() < 2) return 0;
5        sort(nums.begin(),nums.end());
6        int n = nums.size();
7        int mx = INT_MIN;
8        for(int i=0; i<n-1; i++){
9          if(nums[i+1] - nums[i] > mx) mx = nums[i+1] - nums[i];
10        }
11        return mx;
12    }
13};