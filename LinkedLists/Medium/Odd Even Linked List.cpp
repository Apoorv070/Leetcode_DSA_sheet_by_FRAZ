class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL) return head;
       
        ListNode* oddtail = head;
        ListNode* oddHead = head;
        ListNode* eventail = head->next;
        ListNode* evenHead = head->next; 
        
        while(eventail != NULL && eventail->next != NULL) {
            oddtail->next = eventail->next;
            oddtail = eventail->next;
            
            eventail->next = oddtail->next;
            eventail = oddtail->next;
        }
        
        oddtail->next = evenHead;
        return oddHead;
    }
};
