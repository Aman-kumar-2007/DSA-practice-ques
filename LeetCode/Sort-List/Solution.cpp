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
11class Solution {
12public:
13    ListNode* sortList(ListNode* head) {
14        ListNode* tmp = head;
15        vector<int> arr;
16
17        while(tmp!= NULL){
18          arr.push_back(tmp->val);
19          tmp = tmp->next;
20        }
21
22        sort(arr.begin(),arr.end());
23        ListNode* ans = new ListNode(1);
24        tmp = ans;
25        for(int i=0; i<arr.size(); i++){
26          ListNode* t = new ListNode(arr[i]);
27          tmp->next = t;
28          tmp = t;
29        }
30        return ans->next;
31    }
32};