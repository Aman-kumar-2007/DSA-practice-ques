1class Solution {
2public:
3    int kthSmallest(vector<vector<int>>& matrix, int k) {
4      int n = matrix.size();
5      priority_queue<int> pq;
6
7        for(int i=0; i<n; i++){
8          for(int j=0; j<n; j++){
9             pq.push(matrix[i][j]);
10             if(pq.size() > k) pq.pop();
11          }
12        }
13        return pq.top();
14    }
15};