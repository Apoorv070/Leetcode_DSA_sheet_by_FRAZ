class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
  ListNode * first = head;
  ListNode * second = head;
 while(second!=NULL){
     if(first->val!=second->val){
         first = first->next;
         second = second->next;
     }else{
         first->next = second->next;
         second = first->next;
     }
 }
 
 return head;
    }
};
