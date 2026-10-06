1class Solution {
2public:
3    string rotate(string s, int n) {
4        string ans = "";
5        for (int i = n+1; i < s.size(); i++){
6          ans += s[i];
7        }
8        ans += s[n];
9        return ans;
10    }
11    bool rotateString(string s, string goal) {
12        int n = s.size();
13        string a = s;
14        for (int i = 0; i < n; i++) {
15           a = rotate(a,0);
16           if(a == goal) return true;
17        }
18         return false;
19    }
20    
21};