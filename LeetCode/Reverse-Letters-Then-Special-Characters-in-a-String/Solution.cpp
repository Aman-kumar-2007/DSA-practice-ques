1class Solution {
2public:
3    string reverseByType(string s) {
4        int l = 0, r = s.length() - 1;
5        while (l <= r) {
6            if (!(s[l] >= 'a' && s[l] <= 'z')) {
7                l++;
8                continue;
9            }
10            if (!(s[r] >= 'a' && s[r] <= 'z')) {
11                r--;
12                continue;
13            }
14            swap(s[l], s[r]);
15            l++;
16            r--;
17        }
18        l = 0, r = s.length() - 1;
19        while (l <= r) {
20            if ((s[l] >= 'a' && s[l] <= 'z')) {
21                l++;
22                continue;
23            }
24            if ((s[r] >= 'a' && s[r] <= 'z')) {
25                r--;
26                continue;
27            }
28            swap(s[l], s[r]);
29            l++;
30            r--;
31        }
32        return s;
33    }
34};