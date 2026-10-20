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

   ListNode* mergeTwoLists(ListNode*& a, ListNode*& b) {
        ListNode* c = new ListNode(101);
        ListNode* tmp = c;
        while(a != NULL && b != NULL){
         if(a->val <= b->val){
          tmp->next = a;
          a = a->next;
          tmp = tmp->next;
         }else {
          tmp->next = b;
          b = b->next;
          tmp = tmp->next;
         }
        }
        if(a == NULL ){
          tmp->next = b;
        }else {
          tmp->next = a;
        }
        return c->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size() == 0) return NULL;
        int i = 0;
        while(arr.size() > 1){
          ListNode* a = arr[arr.size()-1];
          arr.pop_back();
          ListNode* b = arr[arr.size()-1];
          arr.pop_back();
          ListNode* c = mergeTwoLists(a,b);
          arr.push_back(c);
        }
        return arr[0];
    }
};