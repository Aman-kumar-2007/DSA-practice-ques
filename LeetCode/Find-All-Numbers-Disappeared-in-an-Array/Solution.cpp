1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        unordered_set<int> s;
5        int n = nums.size();
6        for(int i=0; i<n; i++){
7            s.insert(nums[i]);
8        }
9        vector<int> ans;
10        for(int i = 1; i<=n; i++){
11            if(s.find(i) == s.end()) ans.push_back(i);
12        }
13        if(s.size() == 0) ans.push_back(n+1);
14        return ans;
15    }
16};