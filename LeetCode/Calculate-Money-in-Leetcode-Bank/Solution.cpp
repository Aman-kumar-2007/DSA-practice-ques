1class Solution {
2public:
3    int totalMoney(int n) {
4        int a = 1;
5        int sum = 0;
6        int ans = 0;
7        for(int i=1; i<=n; i++){
8          sum += a;
9          a++;
10          ans = sum;
11          if(i % 7 == 0){
12            a = (i / 7) + 1;
13          }
14        }
15        return ans;
16    }
17};