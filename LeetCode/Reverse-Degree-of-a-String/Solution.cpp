1class Solution {
2public:
3    int reverseDegree(string s) {
4        int n = s.size();
5        int ans = 0;
6        for(int i=0; i<n; i++){
7          ans += ((26-(s[i]-71-26) )) * (i+1);
8        }
9        return ans;
10    }
11};