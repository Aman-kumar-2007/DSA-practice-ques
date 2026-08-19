1class Solution {
2public:
3    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
4        sort(boxTypes.begin(), boxTypes.end(), [](auto &a, auto &b){
5            return a[1] > b[1];
6        });
7
8        int ans = 0;
9        int totalBoxes = 0;
10        for (int i = 0; i < boxTypes.size(); i++) {
11            if (totalBoxes + boxTypes[i][0] > truckSize) {
12               int remaining = truckSize - totalBoxes;
13                ans += remaining * boxTypes[i][1];
14                totalBoxes += remaining;
15            } else {
16                totalBoxes += boxTypes[i][0];
17                ans += boxTypes[i][0] * boxTypes[i][1];
18            }
19        }
20        return ans;
21    }
22};