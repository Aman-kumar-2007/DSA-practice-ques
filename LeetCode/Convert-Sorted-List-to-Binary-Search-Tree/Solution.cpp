1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11/**
12 * Definition for a binary tree node.
13 * struct TreeNode {
14 *     int val;
15 *     TreeNode *left;
16 *     TreeNode *right;
17 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
18 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
19 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
20 * };
21 */
22class Solution {
23public:
24    TreeNode* convertToBst(vector<int>& arr,int l,int r){
25      if(l > r) return NULL;
26      int mid = l + (r-l)/2;
27      TreeNode* root = new TreeNode(arr[mid]);
28      root->left = convertToBst(arr,l,mid-1);
29      root->right = convertToBst(arr,mid+1,r);
30      return root;
31    }
32    TreeNode* sortedListToBST(ListNode* head) {
33        ListNode* tmp = head;
34        vector<int> v;
35        while(tmp != NULL){
36          v.push_back(tmp->val);
37          tmp = tmp->next;
38        }
39        int n = v.size();
40        return convertToBst(v,0,n-1);
41    }
42};