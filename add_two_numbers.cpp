// Leetcode : https://leetcode.com/problems/add-two-numbers/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2) return NULL;
        ListNode* ans = new ListNode(0);
        ListNode* res = ans;
        int carry = 0;
        int val = 0;
        while(l1 || l2){
            if(l1 && l2){
                val = l1->val + l2->val + carry;
                l1 = l1->next;
                l2 = l2->next;
            }
            else {
                if(l1){
                    val = l1->val + carry;
                    l1 = l1->next;
                }
                else{
                    val = l2->val + carry;
                    l2 = l2->next;
                }
            }
            ans->next  = new ListNode(val % 10);
            carry = val/10;
            ans = ans->next;
        }
        if(carry > 0) ans->next = new ListNode(carry);
        return res->next;
    }
};