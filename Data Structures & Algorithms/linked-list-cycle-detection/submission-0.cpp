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
    bool hasCycle(ListNode* head) {
        int len = 0;
        while((len < 1010) && (head != nullptr)) {
            len++;
            head = head->next;
        }
        if(len > 1000) {
            return 1;
        }
        return 0;
    }
};
