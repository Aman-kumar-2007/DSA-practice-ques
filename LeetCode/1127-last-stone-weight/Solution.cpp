class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        priority_queue<int> pq;
        for(int num : arr){
          pq.push(num);
        }

        while(pq.size() > 1){
          int x = pq.top();
          pq.pop();
          int y = pq.top();
          pq.pop();
          if(x != y)
          pq.push(x - y);
        }
        if(pq.size() != 0) return pq.top();
        return 0;
    }
};