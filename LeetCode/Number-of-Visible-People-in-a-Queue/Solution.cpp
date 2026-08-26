1class Solution {
2public:
3    vector<int> canSeePersonsCount(vector<int>& h) {
4        stack<int> st;
5        int n = h.size();
6        vector<int> ans(n);
7        for(int i=n-1; i>=0; i--){
8          int cnt = 0;
9          while(st.size() != 0 && h[i] > st.top()){
10            st.pop();
11            cnt++;
12          }
13          if(st.size() != 0) cnt++;
14          ans[i] = cnt;
15          st.push(h[i]);
16
17        }
18        return ans;
19    }
20};