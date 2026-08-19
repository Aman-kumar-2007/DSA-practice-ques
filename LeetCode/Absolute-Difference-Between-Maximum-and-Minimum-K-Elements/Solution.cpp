1class Solution {
2public:
3    int absDifference(vector<int>& nums, int k) {
4        sort(nums.begin(),nums.end());
5        int sumSmall = 0;
6        int sumLarge = 0;
7        int n = nums.size();
8        for(int i=0; i<k; i++){
9          sumSmall += nums[i];
10          sumLarge += nums[n-i-1];
11        }
12
13        return abs(sumSmall - sumLarge);
14    }
15};