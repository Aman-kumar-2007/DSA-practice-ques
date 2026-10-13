1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4
5      int maxIdx = 0;
6      for(int i = 0; i<nums.size(); i++){
7        if(i > maxIdx) return false;
8        maxIdx = max(maxIdx,i+nums[i]);
9      }
10
11      return true;
12    }
13};