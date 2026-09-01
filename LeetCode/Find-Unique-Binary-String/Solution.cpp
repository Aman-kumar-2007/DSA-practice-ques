1class Solution {
2public:
3    void generateBinaryStrings(int n, string current, vector<string>& result) {
4        if (current.length() == n) {
5            result.push_back(current);
6            return;
7        }
8
9        generateBinaryStrings(n, current + "0", result);
10        generateBinaryStrings(n, current + "1", result);
11    }
12
13    string findDifferentBinaryString(vector<string>& nums) {
14        unordered_set<string> s;
15        for (string a : nums) {
16            s.insert(a);
17        }
18        int n = nums[0].size();
19         vector<string> result;
20         generateBinaryStrings(n, "", result);
21
22         for(int i=0; i<result.size(); i++){
23          if(s.find(result[i]) == s.end()) return result[i];
24         }
25         return "";
26    }
27};