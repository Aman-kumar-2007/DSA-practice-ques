class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans = "";
        sort(s.begin(),s.end());
        string f = s[0];
        string l = s[s.size()-1];
        int n = min(f.size(),l.size());
        for(int i=0; i<n; i++){
          if(f[i] != l[i]){
            break;
          } else ans +=f[i];
        }
        return ans;
    }
};