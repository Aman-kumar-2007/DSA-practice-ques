1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
10 * right(right) {}
11 * };
12 */
13class Solution {
14public:
15    void dfs(TreeNode* root, vector<int>& v) {
16        if (root == NULL)
17            return;
18        dfs(root->left, v);
19        v.push_back(root->val);
20        dfs(root->right, v);
21    }
22    int getMinimumDifference(TreeNode* root) {
23        vector<int> v;
24        dfs(root, v);
25        int minV = INT_MAX;
26        int n = v.size();
27        for (int i = 0; i < n - 1; i++) {
28            minV = min(minV, v[i + 1] - v[i]);
29        }
30        return minV;
31    }
32};