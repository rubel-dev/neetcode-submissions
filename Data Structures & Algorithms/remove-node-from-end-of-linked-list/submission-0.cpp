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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int len = 0;
        while( temp != nullptr) {
            len++;
            temp = temp->next;

        }
        n = len - n + 1;
        if(n == 1) {
            return head->next;

        }
        temp = head;
        ListNode *next = nullptr;
        while(temp != nullptr) {
            n--;
            if(n == 0) {
                next->next = temp->next;
                break;
            }
            next = temp;
            temp = temp->next;
        }
        return head;

    }
};
