1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int sum = 0;
15    void reverseInorder(TreeNode* root){
16      if(root == NULL) return;
17      reverseInorder(root->right);
18      root->val += sum;
19      sum = root->val;
20      reverseInorder(root->left);
21    }
22    TreeNode* bstToGst(TreeNode* root) {
23        reverseInorder(root);
24        return root;
25    }
26};