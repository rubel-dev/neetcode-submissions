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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr) return head;
        
         
        ListNode* originalHead = head;
        while(head->next != nullptr) {
            int a = head->val;
            int b = head->next->val;
            int gc = __gcd(a, b);
            ListNode* temp = head->next;
            ListNode* node  = new ListNode(gc);
            head->next = node;
            head->next->next = temp;
            head = head->next->next;
           
        }
        return originalHead;
    }
};