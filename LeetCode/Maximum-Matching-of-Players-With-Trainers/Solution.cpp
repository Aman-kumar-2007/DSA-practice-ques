1class Solution {
2public:
3    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
4        sort(players.begin(),players.end());
5        sort(trainers.begin(),trainers.end());
6
7        int n = players.size() < trainers.size() ? players.size() : trainers.size();
8        int cnt = 0;
9        int i = 0;
10        int j = 0;
11        while( i< players.size() && j < trainers.size()){
12          if(players[i] > trainers[j]){
13            j++;
14          } else if(players[i] <= trainers[j]){
15            cnt++;
16            i++;
17            j++;
18          }
19        }
20        return cnt;
21    }
22};