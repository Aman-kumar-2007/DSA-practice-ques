1class Solution {
2public:
3    bool isSorted(vector<int> arr) {
4        vector<int> brr = arr;
5        sort(arr.begin(), arr.end());
6        if (arr == brr)
7            return true;
8        else
9            return false;
10    }
11    int minimumPairRemoval(vector<int>& nums) {
12        int opsCnt = 0;
13        while (!isSorted(nums)) {
14            int minSum = INT_MAX;
15            int idx = 0;
16
17            for (int i = 0; i < nums.size() - 1; i++) {
18                int sum = nums[i] + nums[i + 1];
19
20                if (sum < minSum) {
21                    minSum = sum;
22                    idx = i;
23                }
24            }
25            nums[idx] = nums[idx] + nums[idx+1];
26            nums.erase(nums.begin() + idx + 1);
27            opsCnt++;
28        }
29            return opsCnt;
30        }
31    };
32