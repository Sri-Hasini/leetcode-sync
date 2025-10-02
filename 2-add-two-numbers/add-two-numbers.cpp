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
        ListNode * temp1 = l1, *temp2 = l2;
        ListNode * dummy = new ListNode(0);
        ListNode * dum = dummy;
        int carry = 0, r = 0;
        while (temp1 && temp2) {
            int value = temp1->val + temp2->val + carry;
            if (value > 9) {
                r = value%10;
                value /= 10;
                carry = 1;
            }
            else carry = 0;
            if (carry > 0) {
                ListNode * temp3 = new ListNode(r);
                dum->next = temp3;
                dum = dum->next;
            }
            else {
                ListNode * temp3 = new ListNode(value);
                dum->next = temp3;
                dum = dum->next;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while (temp1) {
            int value = temp1->val + carry;
            if (value > 9) {
                r = value%10;
                value /= 10;
                carry = 1;
            }
            else carry = 0;
            if (carry > 0) {
                ListNode * temp3 = new ListNode(r);
                dum->next = temp3;
                dum = dum->next;
            }
            else {
                ListNode * temp3 = new ListNode(value);
                dum->next = temp3;
                dum = dum->next;
            }
            temp1 = temp1->next;
        }
        while (temp2) {
            int value = temp2->val + carry;
            if (value > 9) {
                r = value%10;
                value /= 10;
                carry = 1;
            }
            else carry = 0;
            if (carry > 0) {
                ListNode * temp3 = new ListNode(r);
                dum->next = temp3;
                dum = dum->next;
            }
            else {
                ListNode * temp3 = new ListNode(value);
                dum->next = temp3;
                dum = dum->next;
            }
            temp2 = temp2->next;
        }
        if (carry > 0) {
            ListNode * temp4 = new ListNode(1);
            dum->next = temp4;
            dum = dum->next;
        }
        dum->next = nullptr;
        return dummy->next;
    }
};