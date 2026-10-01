1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int,int> mp;
5        for(int num : nums){
6          mp[num]++;
7        }
8
9        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
10
11        vector<int> ans;
12        for(auto i : mp){
13          pq.push({i.second,i.first});
14          if(pq.size() > k) pq.pop();
15        }
16        while(pq.size() > 0){
17          ans.push_back(pq.top().second);
18          pq.pop();
19        }
20
21        return ans;
22    }
23};