1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> arr(n);
6        stack<int> st;
7        for(int i=n-2; i>=0; i--) st.push(nums[i]);
8        for(int i=n-1; i>=0; i--){
9            while(st.size() != 0 && nums[i] >= st.top()){
10                st.pop();
11            }
12            arr[i] = (st.size() > 0) ? st.top() : -1;
13            st.push(nums[i]);
14        }
15        return arr;
16    }
17};