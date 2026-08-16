1class Solution {
2public:
3    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
4        int idx = -1;
5        int n = drones.size();
6        int min = INT_MAX;
7        for(int i=0; i<n; i++){
8          int dist = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
9          if(dist <= drones[i][2] && dist < min) {
10            idx = i;
11            min = dist;
12          }
13        }
14        return idx;
15    }
16};