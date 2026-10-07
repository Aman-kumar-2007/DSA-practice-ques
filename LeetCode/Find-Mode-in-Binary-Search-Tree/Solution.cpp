1class Solution {
2public:
3    void dfs(TreeNode* root, vector<int>& v) {
4        if (root == NULL)
5            return;
6        dfs(root->left, v);
7        v.push_back(root->val);
8        dfs(root->right, v);
9    }
10
11    vector<int> findMode(TreeNode* root) {
12        vector<int> v;
13        dfs(root, v);
14        unordered_map<int, int> mp;
15        for (int num : v) {
16            mp[num]++;
17        }
18        int maxV = 0;
19        for(auto i : mp){
20          if(i.second > maxV){
21            maxV = i.second;
22          }
23        }
24        vector<int> ans;
25         for(auto i : mp){
26          if(i.second == maxV){
27            ans.push_back(i.first);
28          }
29        }
30        return ans;
31    }
32};