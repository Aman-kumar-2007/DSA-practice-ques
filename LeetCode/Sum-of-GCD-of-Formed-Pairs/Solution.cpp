1class Solution {
2public:
3    int gcd(int a, int b) {
4        while (b) {
5            int t = b;
6            b = a % b;
7            a = t;
8        }
9        return a;
10    }
11    long long gcdSum(vector<int>& nums) {
12        int n = nums.size();
13        vector<int> prefixGcd(n);
14
15        int mx = 0;
16        for (int i = 0; i < n; i++) {
17            mx = max(nums[i], mx);
18            prefixGcd[i] = gcd(nums[i], mx);
19        }
20
21        sort(prefixGcd.begin(), prefixGcd.end());
22
23        int a = 0;
24        int b = prefixGcd.size() - 1;
25        long long sum = 0;
26        while (a < b) {
27            sum += gcd(prefixGcd[a], prefixGcd[b]);
28            a++;
29            b--;
30        }
31        return sum;
32    }
33};