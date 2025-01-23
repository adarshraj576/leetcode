// Leetcode : https://leetcode.com/problems/reorder-list/

// Solution : O(n^2) time complexity (Recursion)
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL) return;
        ListNode* tempHead;
        ListNode* last;
        ListNode* secondLast = head;
        while(secondLast->next->next != NULL){
            secondLast = secondLast->next;
            last = secondLast->next;
        }
        tempHead = head->next;
        head->next = last;
        secondLast->next = NULL;
        last->next = tempHead;
        reorderList(tempHead);
    }
};

// TODO Solution : O(n) time complexity (Iterative)