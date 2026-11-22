class Solution {
public:
    void inOrder(TreeNode* root, vector<int>& arr) {
        if (root == NULL)
            return;
        inOrder(root->left, arr);
        arr.push_back(root->val);
        inOrder(root->right, arr);
    }
    
    void Convert(TreeNode* root, vector<int>& arr, int& idx) {
      if(root == NULL) return;
      Convert(root->left,arr,idx);
      root->val = arr[idx++];
      Convert(root->right,arr,idx);
    }

    void recoverTree(TreeNode*& root) {
        vector<int> arr;
        inOrder(root, arr);
        sort(arr.begin(),arr.end());
        int idx = 0;
        Convert(root,arr,idx);
    }
};