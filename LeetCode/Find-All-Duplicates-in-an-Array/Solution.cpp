1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        unordered_map<int,int> ump;
5
6        for(int i : nums){
7          ump[i]++;
8        }
9        vector<int> a;
10        for(auto i : ump){
11          if(i.second == 2) a.push_back(i.first);
12        }
13        return a;
14    }
15};