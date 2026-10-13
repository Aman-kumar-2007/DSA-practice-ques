1class Solution {
2public:
3    int numRescueBoats(vector<int>& arr, int limit) {
4        int i = 0;
5        int j = arr.size()-1;
6        int ans = 0;
7        sort(arr.begin(),arr.end());
8        while(i <= j){
9          if(arr[i] + arr[j] <= limit) i++;
10          ans++;
11          j--;
12        }
13        return ans;
14    }
15};