class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * prev = NULL;
        ListNode * curr = head;
        ListNode * dum = head;
        while(dum!=NULL){
           dum = dum->next;
           curr->next = prev;
            prev=  curr;
            curr = dum;
        }
        return prev; 
    }
};
