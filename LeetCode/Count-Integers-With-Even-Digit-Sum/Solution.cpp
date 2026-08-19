1class Solution {
2public:
3    int countEven(int num) {
4        
5        int cnt = 0;
6        for(int i=1; i<=num; i++){
7          int a = i;
8          int sum = 0;
9          while(a > 0){
10            int remain = a % 10;
11            a /= 10;
12            sum += remain;
13          }
14          if(sum % 2 == 0){
15            cnt++;
16          }
17        }
18        return cnt;
19    }
20};