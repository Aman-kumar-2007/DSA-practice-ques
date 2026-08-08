1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        unordered_map<int,int> ump;
5
6        while(n != 0){
7          int remain = n % 10;
8          n /= 10;
9          ump[remain]++;
10        }
11        int ans = 0;
12        for(auto i : ump){
13          ans += i.first*i.second;
14        }
15        return ans;
16    }
17};