/**
 * Definition for singly-linked list.
 * struct ListNode {
 *   int val;
 *   ListNode *next;
 *   ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode res(0);
    ListNode* current = &res;
    while (true) {
      if (l1 == nullptr && l2 == nullptr) {
        return res.next;
      } else if (l1 == nullptr) {
        current->next = l2;
        return res.next;
      } else if (l2 == nullptr) {
        current->next = l1;
        return res.next;
      } else if (l1->val < l2->val) {
        current->next = l1;
        current = l1;
        l1 = l1->next;
      } else {
        current->next = l2;
        current = l2;
        l2 = l2->next;
      }
    }
  }
};
