1class Solution {
2public:
3    bool canBeEqual(vector<int>& target, vector<int>& arr) {
4      sort(target.begin(),target.end());
5      sort(arr.begin(),arr.end());
6      for(int i=0; i<arr.size(); i++){
7        if(arr[i] != target[i]) return false;
8      }  
9      return true;
10    }
11};