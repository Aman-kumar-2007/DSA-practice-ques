1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        vector<int> prefix(n), suffix(n);
7        prefix[0] = nums[0];
8        for (int i = 1; i < n; i++) {
9            prefix[i] = max(prefix[i - 1], nums[i]);
10        }
11        suffix[n - 1] = nums[n - 1];
12        for (int i = n - 2; i >= 0; i--) {
13            suffix[i] = min(suffix[i + 1], nums[i]);
14        }
15
16        for (int i = 0; i < n; i++) {
17            if (prefix[i] - suffix[i] <= k) {
18                return i;
19            }
20        }
21      return -1;
22    }
23};