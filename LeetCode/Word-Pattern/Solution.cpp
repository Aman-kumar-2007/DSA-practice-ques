class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> mp;
        unordered_map<string, char> sp;
        vector<string> word;

        stringstream ss(s);
        string temp;

        while (getline(ss, temp, ' ')) {
            word.push_back(temp);
        }

        if (pattern.length() != word.size())
            return false;

        for (int i = 0; i < pattern.length(); i++) {

            if (mp.count(pattern[i])) {
                if (mp[pattern[i]] != word[i])
                    return false;
            }

            if (sp.count(word[i])) {
                if (sp[word[i]] != pattern[i])
                    return false;
            }

            mp[pattern[i]] = word[i];
            sp[word[i]] = pattern[i];
        }

        return true;
    }
};