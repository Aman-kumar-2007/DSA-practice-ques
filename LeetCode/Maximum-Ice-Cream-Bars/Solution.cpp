1class Solution {
2public:
3    int maxIceCream(vector<int>& costs, int coins) {
4        sort(costs.begin(),costs.end());
5        int cnt = 0;
6        int sum = 0;
7        for(int i=0; i<costs.size(); i++){
8          sum += costs[i];
9          if(sum <= coins) cnt++;
10          else break;
11        }
12        return cnt;
13    }
14};