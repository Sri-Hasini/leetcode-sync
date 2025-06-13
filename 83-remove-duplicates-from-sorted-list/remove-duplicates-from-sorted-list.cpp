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
    void rec(ListNode * prev, ListNode * cur) {
        if (cur == nullptr) {
            return;
        }
        if (prev->val == cur->val) {
            prev->next = cur->next;
            cur = cur->next;
        }
        else {
            prev = prev->next;
        }
        rec(prev, cur);
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        // ListNode * temp = head;
        // while (temp) {
        //     if (temp->next && temp->val == temp->next->val) {
        //         temp->next = temp->next->next;
        //     }
        //     else {
        //         temp = temp->next;
        //     }
        // }
        rec(head, head->next);
        return head;
    }
};