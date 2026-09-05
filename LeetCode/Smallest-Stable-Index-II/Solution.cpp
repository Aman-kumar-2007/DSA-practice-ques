1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        vector<int> prefix(n);
7        prefix[0] = nums[0];
8        for(int i=1; i<n; i++){
9            prefix[i] = max(prefix[i-1],nums[i]);
10        }
11
12        vector<int> suffix(n);
13        suffix[n-1] = nums[n-1];
14        for(int i=n-2; i>=0; i--){
15            suffix[i] = min(suffix[i+1],nums[i]);
16        }
17
18        for(int i=0; i<n; i++){
19            if(prefix[i] - suffix[i] <= k) return i;
20        }
21        return -1;
22    }
23};