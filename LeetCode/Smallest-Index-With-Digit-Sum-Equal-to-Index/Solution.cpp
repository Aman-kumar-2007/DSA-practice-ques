1class Solution {
2public:
3    int digit_sum(int n) {
4        int sum = 0;
5        while (n > 0) {
6            sum += (n % 10);
7            n /= 10;
8        }
9        return sum;
10    }
11    int smallestIndex(vector<int>& nums) {
12        for (int i = 0; i < nums.size(); i++) {
13            if (i == digit_sum(nums[i])) {
14                return i;
15            }
16        }
17        return -1;
18    }
19};