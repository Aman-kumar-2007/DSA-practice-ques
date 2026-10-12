1class Solution {
2    int total = 0;
3    int sum = 0;
4public:
5    int level(TreeNode* root){
6        if(root == nullptr) return 0;
7        return 1 + max(level(root->left),level(root->right));
8    }
9
10    void solve(TreeNode* Node,int l){
11        if(Node == NULL) {
12            return;
13        }
14
15        if(l == total){
16            sum += Node->val;
17        }
18        solve(Node->left,l+1);
19        solve(Node->right, l + 1);
20    }
21    int deepestLeavesSum(TreeNode* root) {
22        total = level(root);
23        solve(root,1);
24        return sum;
25    }
26};