1class Solution {
2public:
3    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
4        sort(points.begin(), points.end());
5        int n = points.size();
6        int ans = 0;
7        for (int i = 0; i < n - 1; i++) {
8            if (points[i][0] != points[i + 1][0])
9                ans = max(ans, (points[i + 1][0] - points[i][0]));
10        }
11        return ans;
12    }
13};