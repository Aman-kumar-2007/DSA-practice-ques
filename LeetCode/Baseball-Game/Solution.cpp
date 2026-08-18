1class Solution {
2public:
3    int calPoints(vector<string>& o) {
4        int n = o.size();
5        vector<int> v;
6        for (int i = 0; i < n; i++) {
7            if (o[i] == "C")
8                v.pop_back();
9            else if (o[i] == "+") {
10                int sum = v[v.size() - 1] + v[v.size() - 2];
11                v.push_back(sum);
12            } else if (o[i] == "D") {
13                int a = v[v.size() - 1] * 2;
14                v.push_back(a);
15            } else {
16                v.push_back(stoi(o[i]));
17            }
18        }
19        int ans = 0;
20        for (int num : v) {
21            ans += num;
22        }
23        return ans;
24    }
25};