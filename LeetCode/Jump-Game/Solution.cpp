1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4      int a = nums.size()-1;
5
6      for(int i = a-1; i>=0; i--){
7        if(i + nums[i] >= a){
8          a = i;
9        }
10      }
11
12      return a == 0;
13    }
14};