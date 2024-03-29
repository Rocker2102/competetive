/* https://leetcode.com/problems/add-two-numbers/ */

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL;
        ListNode *curr = head;
        int carry = 0;

        while (true) {
            ListNode *tmp = new ListNode();
            tmp->val = 0;
            tmp->next = NULL;

            if (l1 != NULL && l2 != NULL) {
                tmp->val = l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            } else if (l1 != NULL) {
                tmp->val = l1->val;
                l1 = l1->next;
            } else if (l2 != NULL) {
                tmp->val = l2->val;
                l2 = l2->next;
            }

            tmp->val += carry;

            if (tmp->val >= 10) {
                carry = 1;
                tmp->val -= 10;
            } else {
                carry = 0;
            }

            if (head == NULL) {
                head = tmp;
                curr = head;
            } else {
                curr->next = tmp;
                curr = curr->next;
            }

            if (l1 == NULL && l2 == NULL && carry == 0) {
                break;
            }
        }

        return head;
    }
};
