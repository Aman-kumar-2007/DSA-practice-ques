1class Solution {
2public:
3    void allPrime(int n,vector<int>& arr,int s){
4      if(n < 2) return;
5       vector<bool> isPrime(n + 1, true);
6       isPrime[0] = isPrime[1] = false;
7
8    for (int i = 2; i * i <= n; i++) {
9        if (isPrime[i]) {
10            for (int j = i * i; j <= n; j += i) {
11                isPrime[j] = false;
12            }
13        }
14    }
15    int sum = 0;
16    for (int i = 2; i <= n; i++) {
17        if (isPrime[i]) {
18           sum += i;
19           if(sum > s){
20             return;
21           }
22           arr.push_back(i);
23        }
24    }
25
26    }
27    vector<int> maxPrimes(int n, int s) {
28      vector<int> arr;
29      allPrime(n,arr,s);
30      return arr;
31    }
32};