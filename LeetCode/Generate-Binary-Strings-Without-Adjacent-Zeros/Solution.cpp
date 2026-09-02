1class Solution {
2public:
3    void binaryStringGenerate(vector<string>& result , int n , string current){
4        if (current.length() == n) {
5            result.push_back(current);
6            return;
7        }
8        binaryStringGenerate(result,n,current+'0');
9        binaryStringGenerate(result,n,current+'1');
10
11    }
12    vector<string> validStrings(int n) {
13         vector<string> result;
14         binaryStringGenerate(result,n,"");
15
16         vector<string> ans;
17
18         for(int i=0; i<result.size(); i++){
19          string b = result[i];
20          int cnt = 0;
21          for(int j=0; j < n-1; j++){
22            if(b[j] == '0' && b[j+1] == '0') cnt++;
23          }
24
25          if(cnt == 0){
26            ans.push_back(result[i]);
27          }
28
29         }
30
31         return ans;
32    }
33};