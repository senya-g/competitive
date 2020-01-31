/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    ListNode* q = NULL;
    ListNode* r = NULL;

    while (head != NULL) {
      r = q;
      q = head;
      head = head->next;
      q->next = r;
    }

    head = q;
    return head;
  }
};
