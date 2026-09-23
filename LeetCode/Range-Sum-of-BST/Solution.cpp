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
14    void solve(TreeNode* root,vector<int>& arr){
15      if(root == NULL) return;
16      arr.push_back(root->val);
17      solve(root->left,arr);
18      solve(root->right,arr);
19    }
20    int rangeSumBST(TreeNode* root, int low, int high) {
21      vector<int> arr;
22      solve(root,arr);
23      int sum = 0;
24      for(int i=0; i<arr.size(); i++){
25        if(arr[i] >= low && arr[i] <= high) sum += arr[i];
26      }
27      return sum;
28    }
29};