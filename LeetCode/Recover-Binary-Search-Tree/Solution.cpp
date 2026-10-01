1class Solution {
2public:
3    void inOrder(TreeNode* root, vector<int>& arr) {
4        if (root == NULL)
5            return;
6        inOrder(root->left, arr);
7        arr.push_back(root->val);
8        inOrder(root->right, arr);
9    }
10    
11    void Convert(TreeNode* root, vector<int>& arr, int& idx) {
12      if(root == NULL) return;
13      Convert(root->left,arr,idx);
14      root->val = arr[idx++];
15      Convert(root->right,arr,idx);
16    }
17
18    void recoverTree(TreeNode*& root) {
19        vector<int> arr;
20        inOrder(root, arr);
21        sort(arr.begin(),arr.end());
22        int idx = 0;
23        Convert(root,arr,idx);
24    }
25};