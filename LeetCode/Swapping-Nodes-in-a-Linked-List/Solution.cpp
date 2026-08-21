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
13    ListNode* swapNodes(ListNode* head, int k) {
14        if (head == NULL || head->next == NULL)
15            return head;
16        vector<int> arr;
17        ListNode* tmp = head;
18        while (tmp != NULL) {
19            arr.push_back(tmp->val);
20            tmp = tmp->next;
21        }
22        int idx1 = k - 1;
23        int idx2 = arr.size() - k;
24
25        int a = arr[idx1];
26        arr[idx1] = arr[idx2];
27        arr[idx2] = a;
28
29        ListNode* b = new ListNode(1);
30        tmp = b;
31        for (int i = 0; i < arr.size(); i++) {
32            ListNode* t = new ListNode(arr[i]);
33            tmp->next = t;
34            tmp = t;
35        }
36        return b->next;
37    }
38};