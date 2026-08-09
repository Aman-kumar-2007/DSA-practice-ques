class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            for(int j=i;j<words.size();j++){
                if(i!=j && words[i].size()==words[j].size()){
                    string  s=words[j];
                    reverse(s.begin(),s.end());
                    if(s==words[i]){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};