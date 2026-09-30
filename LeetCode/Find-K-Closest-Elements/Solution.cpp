1class Solution {
2public:
3    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
4        priority_queue<pair<int,int>> pq;
5        for(int num : arr){
6          pq.push({abs(num - x) , num});
7          if(pq.size() > k) pq.pop();
8        }
9
10        vector<int> ans;
11        while(pq.size() > 0){
12          ans.push_back(pq.top().second);
13          pq.pop();
14        }
15        sort(ans.begin(),ans.end());
16        return ans;
17    }
18};