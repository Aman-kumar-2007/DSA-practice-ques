1class Solution {
2public:
3    long long maxAlternatingSum(vector<int>& nums) {
4        long long sum = 0;
5        int n = nums.size();
6        int i = 0;
7        int j = n-1;
8        int c = 0;
9
10        for(int i=0; i<n; i++){
11          if(nums[i] < 0) nums[i] = -1 * nums[i];
12        }
13        sort(nums.begin(),nums.end());
14
15        while(i <= j){
16          if(c % 2 == 0){
17             sum += (nums[j]*nums[j]);
18             j--;
19          } else {
20            sum -= (nums[i]* nums[i]);
21            i++;
22          }
23          c++;
24        }
25        return sum;
26    }
27};