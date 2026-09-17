1class Solution {
2public:
3    bool isValid(string s) {
4        stack<int> st;
5        int n = s.size();
6        for (int i = 0; i < n; i++) {
7            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
8                st.push(s[i]);
9            } else {
10                    if (st.empty())
11                        return false;
12                    char top = st.top();
13                    st.pop();
14                    if ((s[i] == ')' && top != '(') ||
15                        (s[i] == ']' && top != '[') ||
16                        (s[i] == '}' && top != '{')) {
17                        return false;
18                    }
19                }
20        }
21        if (st.empty())
22            return true;
23        return false;
24    }
25};