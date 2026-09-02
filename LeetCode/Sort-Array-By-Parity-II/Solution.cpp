1class Solution {
2public:
3    vector<int> sortArrayByParityII(vector<int>& nums) {
4      int n = nums.size();
5      stack<int> odd;
6      stack<int> even;
7      for(int i=0; i<n; i++){
8        if(nums[i] % 2 != 0) odd.push(nums[i]);
9        else even.push(nums[i]);
10      }
11
12      for(int i=0; i<n; i++){
13        if(i % 2 == 0){
14          nums[i] = even.top();
15          even.pop();
16        } else {
17          nums[i] = odd.top();
18          odd.pop();
19        }
20      }
21
22      return nums;
23    }
24};