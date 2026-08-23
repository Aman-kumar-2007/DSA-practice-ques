1class Solution {
2public:
3    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower,
4                                               int upper) {
5        map<int, int> mp;
6        for (int i : nums) {
7            mp[i]++;
8        }
9
10        vector<vector<int>> ans;
11        int start = -1;
12        for(int i=lower;i<=upper;i++) {
13            if(mp[i]==0) {
14                if(start==-1) start = i;
15            }
16            else {
17                if(start!=-1) {
18                    ans.push_back({start, i-1});
19                    start=-1;
20                }
21            }
22        }
23        if (start != -1) {
24            ans.push_back({start,upper});
25        }
26        return ans;
27    }
28};