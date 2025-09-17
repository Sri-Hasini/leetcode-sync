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
        if (left == right) return head;//edge case when left and right are equal, no need to reverse 
        ListNode * temp = head;
        ListNode * pre = nullptr;//initially kept pre as nullptr
        int cnt = 1;
        while (cnt < left && temp) {//iterated cnt until it equals left or until temp becomes null
            pre = temp;//storing the previous node
            temp = temp->next;//representing current node
            cnt++;
        }
        ListNode * cur = temp;//keep it in cur node
        ListNode * prev = nullptr;//denoting previous one
        ListNode * front = nullptr;//denoting the next one
        while (cnt <= right && cur) {//runs until cnt exceeds right or cur becomes nullptr
        //reversing connections
            front = cur->next;
            cur->next = prev;
            prev = cur;
            cur = front;
            cnt++;
        }
        if (pre) pre->next = prev;//if pre is not null, then we can assign its next as prev
        else head = prev;//if left == 1, this handles such case by keeping head as prev
        temp->next = cur;//
        return head;
    }
};