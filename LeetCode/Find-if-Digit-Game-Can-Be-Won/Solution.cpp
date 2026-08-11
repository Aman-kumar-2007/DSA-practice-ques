1class Solution {
2public:
3    bool canAliceWin(vector<int>& nums) {
4        int sumOfSingles = 0;
5        int sumOfOthers = 0;
6
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] < 10)
9                sumOfSingles += nums[i];
10            else sumOfOthers += nums[i];
11        }
12        if(sumOfSingles == sumOfOthers ) return false;
13        else return true;
14    }
15};