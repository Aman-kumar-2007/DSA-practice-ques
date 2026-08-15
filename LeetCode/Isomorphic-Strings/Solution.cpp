1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        if(s.size() != t.size()) return false;
5
6        unordered_map<char,char> map1;
7        unordered_map<char,char> map2;
8
9        for(int i=0; i<s.size(); i++){
10            if(map1.count(s[i])) {
11                if(map1[s[i]] != t[i]) return false;
12            }
13            if(map2.count(t[i])){
14                if(map2[t[i]] != s[i]) return false;
15            }
16            map1[s[i]] = t[i];
17            map2[t[i]] = s[i];
18        }
19        return true;
20    }
21};