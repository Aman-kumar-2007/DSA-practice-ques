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
15    int rangeSumBST(TreeNode* root, int low, int high) {
16        if (root == NULL)
17            return 0;
18        if (root->val > high)
19            return rangeSumBST(root->left, low, high);
20        if (root->val < low)
21            return rangeSumBST(root->right, low, high);
22        return root->val + rangeSumBST(root->left, low, high) +
23               rangeSumBST(root->right, low, high);
24    }
25};