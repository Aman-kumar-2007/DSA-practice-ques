1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        int n = heights.size();
5        vector<int> nse(n);
6        stack<int> st;
7        for (int i = n - 1; i >= 0; i--) {
8            while (st.size() != 0 && heights[i] <= heights[st.top()])
9                st.pop();
10            nse[i] = (st.size() > 0) ? st.top() : n;
11            st.push(i);
12        }
13        vector<int> pse(n);
14        stack<int> st1;
15        for (int i = 0; i < n; i++) {
16            while (st1.size() != 0 && heights[i] <= heights[st1.top()])
17                st1.pop();
18            pse[i] = (st1.size() > 0) ? st1.top() : -1;
19            st1.push(i);
20        }
21
22        int maxi = 0;
23        for (int i = 0; i < n; i++) {
24            int width = nse[i] - pse[i] - 1;
25            int area = heights[i] * width;
26            maxi = max(maxi, area);
27        }
28        return maxi;
29    }
30};