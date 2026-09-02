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
13    ListNode* deleteMiddle(ListNode* head) {
14        if(head->next == NULL) return NULL;
15        ListNode* slow = head;
16        ListNode* fast = slow->next->next;
17
18        while(fast != NULL && fast->next != NULL){
19             slow = slow->next;
20             fast = fast->next->next;
21        }
22
23        slow->next = slow->next->next;
24        return head;
25    }
26};