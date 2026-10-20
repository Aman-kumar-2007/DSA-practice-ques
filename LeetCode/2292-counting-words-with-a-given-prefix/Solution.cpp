class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        int count = 0;
        for(int i=0; i<words.size(); i++){

          if (words[i].size() < pref.size())
          continue;
          
          count = 0;
          for(int j=0; j<pref.size(); j++){
            if(words[i][j] == pref[j]) count++;
          }
          if(count == pref.size()) ans++;
        }
        return ans;
    }
};