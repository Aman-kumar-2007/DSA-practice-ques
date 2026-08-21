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
13  ListNode* reverseList(ListNode* head) {
14        ListNode* ans = NULL;
15        while(head != NULL){
16          ListNode* a = new ListNode(head->val);
17          a->next = ans;
18          ans = a;
19          head = head->next;
20        }
21        return ans;
22    }
23
24    ListNode* reverseKGroup(ListNode* head, int k) {
25      if(head == NULL || k == 1) return head;
26      ListNode* ans = new ListNode(1);
27      ListNode* a = ans;
28      ListNode* tmp = head;
29      while(tmp != NULL){
30        ListNode* m = tmp;
31        for(int i=1; i<k; i++){
32          if(m->next == NULL){
33             a->next = tmp;
34             return ans->next;
35          }
36          m = m->next;
37        }
38        ListNode* nxtGroup = m->next;
39        m->next = NULL;
40
41        ListNode* b = reverseList(tmp);
42
43        a->next = b;
44        while(a->next != NULL) a = a->next;
45
46        tmp = nxtGroup;
47      }
48      return ans->next;
49      
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66    }
67};