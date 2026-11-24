class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();

        sort(arr.begin(), arr.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });

        if (n == 1)
            return arr;

        vector<vector<int>> ans;
        vector<int> prev = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            vector<int> brr = arr[i];
            if (brr[0] <= prev[1]) {
                prev[1] = max(prev[1],brr[1]);
            } else {
                ans.push_back(prev);
                prev = brr;
            }
        }
        ans.push_back(prev);
        return ans;
    }
};