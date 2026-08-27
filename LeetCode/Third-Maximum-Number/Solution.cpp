1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        long long mx1 = LLONG_MIN;
5        long long mx2 = LLONG_MIN;
6        long long mx3 = LLONG_MIN;
7
8        int n = nums.size();
9
10        for (int i = 0; i < n; i++) {
11            if (nums[i] > mx1)
12                mx1 = nums[i];
13        }
14
15        for (int i = 0; i < n; i++) {
16            if (nums[i] > mx2 && nums[i] != mx1)
17                mx2 = nums[i];
18        }
19
20        for (int i = 0; i < n; i++) {
21            if (nums[i] > mx3 && nums[i] != mx1 && nums[i] != mx2)
22                mx3 = nums[i];
23        }
24
25        if (mx3 == LLONG_MIN)
26            return mx1;
27
28        return mx3;
29        return mx3;
30    }
31};