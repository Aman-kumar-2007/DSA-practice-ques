class Solution {
public:
    string sortSentence(string s) {
        string word;
        vector<string> v(10);

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                v[s[i] - '0'] = word + " ";
                word = "";
            } else if (s[i] != ' ') {
                word += s[i];
            }
        }

        string ans;
        for (string &x : v) {
            ans += x;
        }

        ans.pop_back();
        return ans;
    }
};