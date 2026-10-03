1class Solution {
2public:
3    vector<int> rightSideView(TreeNode* root) {
4        vector<int> result;
5        if (!root) return result;
6        queue<TreeNode*> q;
7        q.push(root);
8        while (!q.empty()) {
9            int size = q.size();
10            for (int i = 0; i < size; ++i) {
11                TreeNode* node = q.front();
12                q.pop();
13                if (i == size - 1) result.push_back(node->val);
14                if (node->left) q.push(node->left);
15                if (node->right) q.push(node->right);
16            }
17        }
18        return result;
19    }
20};