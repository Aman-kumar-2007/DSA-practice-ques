1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack<char> st;
5        for(int i=0; i<s.size(); i++){
6          if(st.size() != 0 && s[i] == st.top()){
7             st.pop();
8             continue;
9          }
10          st.push(s[i]);
11        }
12        
13        string ans = "";
14        while(st.size() != 0){
15          ans += st.top();
16          st.pop();
17        }
18        reverse(ans.begin(),ans.end());
19        return ans;
20    }
21};