// Leetcode : https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans;
        if(l1 == NULL && l2 == NULL) return NULL;
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        if(l1-> val > l2-> val){
            ans = l2;
            l2 = l2->next;
        }
        else{
            ans = l1;
            l1 = l1->next;
        }
        ans->next = mergeTwoLists(l1, l2);
        return ans;
    }
};