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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * dummy = new ListNode(0);
        ListNode * dum = dummy;
        ListNode * temp1 = list1, * temp2 = list2;
        while (temp1 && temp2) {
            if (temp1->val < temp2->val) {
                dum->next = temp1;
                dum = dum->next;
                temp1 = temp1->next;
            }
            else {
                dum->next = temp2;
                dum = dum->next;
                temp2 = temp2->next;
            }
        }
        if (temp1) {
            dum->next = temp1;
        }
        if (temp2) {
            dum->next = temp2;
        }
        return dummy->next;
    }
};