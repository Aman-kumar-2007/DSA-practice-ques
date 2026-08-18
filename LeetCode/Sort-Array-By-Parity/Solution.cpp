1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        int n = nums.size();
5        int i = 0;
6        int j = n-1;
7
8        while( i < j){
9          if(nums[i] % 2 == 0){
10            i++;
11          } else if( nums[j] % 2 != 0){
12            j--;
13          } else {
14            swap(nums[i],nums[j]);
15            i++;
16            j--;
17          }
18        }
19        return nums;
20    }
21};