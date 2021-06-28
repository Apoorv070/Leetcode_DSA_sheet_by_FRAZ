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
    bool isPalindrome(ListNode* head) {
       if(head==NULL)
           return true;
       ListNode* slow = head;
       ListNode* fast = head;
       while(fast!=NULL&&fast->next!=NULL&&fast->next->next!=NULL){
           slow = slow->next;
           fast = fast->next->next;
        }
        ListNode * prev = head;
        ListNode * curr = slow->next;
        slow->next = NULL;
        ListNode *temp = curr;
        while(curr!=NULL){
            temp = temp->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        ListNode * topu = head;
        while(prev!=topu){
            if(head->val!=prev->val)
                return false;
            head = head->next;
            prev = prev->next;
        }
        return true;
        
    }
};
