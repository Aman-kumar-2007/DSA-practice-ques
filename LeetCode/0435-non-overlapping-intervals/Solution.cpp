class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        int n = arr.size();
        int remove = 0;
        sort(arr.begin(), arr.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });
        
        int prev_end = arr[0][1];

        for (int i = 1; i < n; i++) {
            if (arr[i][0] < prev_end ) {
                remove++;
            } else {
              prev_end = arr[i][1];
            }
        }
        return remove;
    }
};