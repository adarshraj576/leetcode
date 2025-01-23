// Leetcode : https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// Solution : Time complexity is O(n) only using two pass
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* temp = head;
        ListNode* temp1;
        while(temp){
            length++;
            temp = temp->next;
        }
        int target = length - n;
        if(target == 0){
            return head->next;
        }
        temp = head;
        while(target - 1 > 0){
            temp = temp->next;
            target--;
        }
        if(!temp->next->next){
            temp->next = NULL;
        }
        else{
            temp1 = temp->next->next;
            temp->next = temp1;
        }
        return head;
    }
};

// Solution : Time complexity is O(n) only using single pass
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        for(int i = 0; i < n; i++){
            fast = fast->next;
        }
        if(!fast){
            return head->next;
        }
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};