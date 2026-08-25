1class Solution {
2public:
3    char shift(char c, int n) {
4        for (int i = 0; i < n; i++) {
5            c++;
6        }
7        return c;
8    }
9    string replaceDigits(string s) {
10       string ans;
11      for(int i=0; i < s.size(); i+=2){
12        int n = s[i+1] - '0';
13       ans += s[i];
14        if(n >= 0) {
15        ans += shift(s[i],n);
16        }
17      }
18      return ans;
19    }
20};