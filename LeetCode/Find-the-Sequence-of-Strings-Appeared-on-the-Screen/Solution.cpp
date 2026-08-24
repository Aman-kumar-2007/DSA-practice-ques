class Solution {
public:
    vector<string> stringSequence(string target) {
        int n = target.size();
        vector<string> ans;

        string s = "a";

        for (int i = 0; i < n; i++) {
            ans.push_back(s);

            while (s[i] != target[i]) {
                s[i]++;
                ans.push_back(s);
            }

            if (i != n - 1)
                s += 'a';
        }

        return ans;
    }
};