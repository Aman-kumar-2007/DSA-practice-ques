1class Solution {
2public:
3    int lastStoneWeight(vector<int>& arr) {
4        priority_queue<int> pq;
5        for(int num : arr){
6          pq.push(num);
7        }
8
9        while(pq.size() > 1){
10          int x = pq.top();
11          pq.pop();
12          int y = pq.top();
13          pq.pop();
14          if(x != y)
15          pq.push(x - y);
16        }
17        if(pq.size() != 0) return pq.top();
18        return 0;
19    }
20};