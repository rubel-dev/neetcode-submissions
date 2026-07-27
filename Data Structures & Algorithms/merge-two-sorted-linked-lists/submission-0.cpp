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
        ListNode *cur = nullptr;
        ListNode *head = cur;
        while(list1 != nullptr || list2 != nullptr) {
            if(list1 == nullptr) {
                if(cur == nullptr) {
                    head = list2;
                    break;
                }
                cur->next = list2;
                break;
            }
            else if(list2 == nullptr) {
                if(cur == nullptr) {
                    head = list1;
                    break;
                }
                cur->next = list1;
                break;
            }
            else if(list1->val <= list2->val) {
                ListNode *temp = list1;
                list1 = list1->next;
                temp->next = nullptr;
                if(cur == nullptr){
                    cur = temp;
                    head = cur;
                } 
                else {
                    cur->next = temp;
                    cur = cur->next;
                } 
                
                
            }
            else {
                ListNode *temp = list2;
                list2 = list2->next;
                temp->next = nullptr;
               
                if(cur == nullptr) {
                    cur = temp;
                    head = cur;
                }
                else
                {
                     cur->next = temp;
                     cur = cur->next;
                      
                }
               
            }
        }
        return head;
    }
};
