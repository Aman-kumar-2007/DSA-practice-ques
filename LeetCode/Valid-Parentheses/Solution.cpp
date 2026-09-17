1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for (int i = 0; i < s.size(); i++) {
6            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
7                st.push(s[i]);
8            } else {
9                if (st.size() == 0)
10                    return false;
11                char top = st.top();
12                st.pop();
13                if ((s[i] == ')' && top != '(') ||
14                    (s[i] == ']' && top != '[') ||
15                    (s[i] == '}' && top != '{')) {
16                      return false;
17                }
18            }
19        }
20        if(st.size() == 0) return true;
21        return false;
22    }
23};