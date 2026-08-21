1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12        ListNode* slow = head;
13        ListNode* fast = head;
14        bool flag = false;
15        while(fast != NULL && fast->next != NULL){
16          slow = slow->next;
17          fast = fast->next->next;
18          if(slow == fast) {
19            flag = true;
20            break;
21          }
22        }
23        if(flag == false) return NULL;
24        else {
25          ListNode* tmp = head;
26          while(tmp != slow){
27            slow = slow->next;
28            tmp = tmp->next;
29          }
30        }
31        return slow;
32    }
33};