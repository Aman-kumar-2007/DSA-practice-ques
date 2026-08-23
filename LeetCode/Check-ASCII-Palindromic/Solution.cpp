1class Solution {
2public:
3    bool isPalindromic(string s) {
4       string a;
5        for(int i=0; i<s.size(); i++){
6          string binaryStr = bitset<8>(s[i]).to_string();
7          a += binaryStr;
8        }
9        int j=0;
10        int k = a.size()-1;
11
12        while(j <= k){
13          if(a[j] != a[k]) return false;
14          j++;
15          k--;
16        }
17        return true;
18    }
19};