1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        unordered_map<int,int> ump;
5        for(int i : nums){
6          ump[i]++;
7        }
8        int n = (nums.size())/3;
9        vector<int> ans;
10        for(auto i : ump){
11          if(i.second > n) ans.push_back(i.first);
12        }
13        return ans;
14    }
15};