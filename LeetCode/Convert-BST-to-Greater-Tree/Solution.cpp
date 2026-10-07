1class Solution {
2public:
3    int sum = 0;
4    void solve(TreeNode* root) {
5        if (root == NULL) return;
6        solve(root->right);
7        sum += root->val;
8        root->val = sum;
9        solve(root->left);
10    }
11
12    TreeNode* convertBST(TreeNode* root) {
13      solve(root);
14      return root;
15    }
16};