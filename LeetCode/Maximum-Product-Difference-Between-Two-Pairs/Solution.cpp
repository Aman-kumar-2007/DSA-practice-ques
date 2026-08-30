1class Solution {
2public:
3    int maxProductDifference(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int n = nums.size();
6        int product = (nums[n-1] * nums[n-2]) -  (nums[1]*nums[0]);
7        return product;
8    }
9};