1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4      int n = nums.size();
5      
6      vector<int> positive;
7      vector<int> negative;
8      for(int i=0; i<n; i++){
9        if(nums[i] > 0) positive.push_back(nums[i]);
10        else negative.push_back(nums[i]);
11      }
12
13      vector<int> ans;
14
15      for(int i=0; i<n/2; i++){
16        ans.push_back(positive[i]);
17        ans.push_back(negative[i]);
18      }
19      return ans;
20    }
21};