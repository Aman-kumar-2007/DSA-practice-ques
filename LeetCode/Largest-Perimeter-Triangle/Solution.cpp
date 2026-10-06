1class Solution {
2public:
3    int largestPerimeter(vector<int>& nums) {
4        int maxPeri = 0;
5        sort(nums.begin(),nums.end());
6        for(int i=nums.size()-1; i>=2; i--){
7          if(nums[i] < nums[i-1] + nums[i-2]){
8             int p = nums[i] + nums[i-1] + nums[i-2];
9             maxPeri = max(maxPeri,p);
10          }
11        }
12        return maxPeri;
13    }
14};