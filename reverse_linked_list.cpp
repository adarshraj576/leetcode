// Leetcode : https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* current;
       ListNode* prev;
       ListNode* next;
       
       current = head;
       prev = NULL;
        while(current!=NULL)
        {
           next = current->next;
           current->next = prev;
           prev = current;
           current = next;
        }
        
        return prev;
    }
};