1class Solution {
2public:
3    int maximumPossibleSize(vector<int>& nums) {
4        int cnt = 1;
5        int min = nums[0];
6        for (int i = 1; i < nums.size(); i++) {
7            if (nums[i] >= min) {
8                min = nums[i];
9                cnt++;
10            }
11        }
12        return cnt;
13    }
14};