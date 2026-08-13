1class Solution {
2public:
3    vector<int> sumZero(int n) {
4
5        vector<int> ans;
6        if (n % 2 == 0) {
7
8            int a = -(n / 2);
9            for (int i = a; i <= n / 2; i++) {
10                if (i != 0)
11                    ans.push_back(i);
12            }
13
14        } else {
15
16            int a = -(n / 2);
17            for (int i = a; i <= n / 2; i++) {
18                ans.push_back(i);
19            }
20        }
21        return ans;
22    }
23};