1class Solution {
2public:
3    int reverse(int x) {
4        long sum = 0;
5
6        while (x != 0) {
7            int tmp = x % 10;
8
9            if(sum > INT_MAX/10 || sum < INT_MIN/10)
10                return 0;
11
12            sum = sum * 10 + tmp;
13            x /= 10;
14        }
15
16        return (int)sum;
17    }
18};