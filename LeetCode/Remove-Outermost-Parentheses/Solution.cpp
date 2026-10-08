1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        stack<char> st;
5        string ans;
6        for (auto a : s) {
7            if (a == '(') {
8                if (st.size() > 0) {
9                    ans += '(';
10                }
11                st.push('(');
12            } else {
13                if (st.size() > 1) {
14                    ans += ')';
15                }
16                st.pop();
17            }
18        }
19        return ans;
20    }
21};