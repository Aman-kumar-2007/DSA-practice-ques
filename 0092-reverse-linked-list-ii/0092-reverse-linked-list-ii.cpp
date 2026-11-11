/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> arr;
        ListNode* tmp = head;
        while (tmp != NULL) {
            arr.push_back(tmp->val);
            tmp = tmp->next;
        }
        reverse(arr.begin() + left - 1, arr.begin() + right);

        ListNode* dummy = new ListNode(0);
        tmp = dummy;

        for (int x : arr) {
            tmp->next = new ListNode(x);
            tmp = tmp->next;
        }

        return dummy->next;
    }
};