1class Solution {
2public:
3    int balancedStringSplit(string s) {
4        int cnt = 0;
5        int ans = 0;
6        for(int i=0; i<s.size(); i++){
7          if(s[i] == 'L') cnt++;
8          else cnt--;
9
10          if(cnt == 0) ans++;
11        }
12        return ans;
13    }
14};