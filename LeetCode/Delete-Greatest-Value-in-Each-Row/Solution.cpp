1class Solution {
2public:
3    int deleteGreatestValue(vector<vector<int>>& grid) {
4        
5        for(int i=0; i<grid.size(); i++){
6          sort(grid[i].begin(),grid[i].end());
7        }
8        int n = grid[0].size()-1;
9        int sum = 0;
10        for(int i=0; i<grid[0].size(); i++){
11            int maxi = 1;
12            for(int j=0; j<grid.size(); j++){
13              maxi = max(maxi,grid[j][n]);
14            }
15            n--;
16            sum += maxi;
17        }
18        return sum;
19    }
20};