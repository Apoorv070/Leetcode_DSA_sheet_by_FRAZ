// We can also use stack to solve this question but i am using revrse method here
class Solution {
public:
    ListNode* reverse(ListNode* l1) {
        ListNode* prev = NULL;
        ListNode* curr = l1;
        ListNode* next;
        while(curr) {
            next = curr->next;
            curr->next = prev;     
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    ListNode* addList(ListNode* l1, ListNode* l2) {
        
        ListNode* prev = NULL;
        
        int carry = 0;
        
        while(l1 && l2) {
            
                int sum = (l1->val + l2->val+carry)%10;
                carry = (l1->val + l2->val+carry)/10;
                
                ListNode* node = new ListNode(sum);
                node->next = prev;
                prev = node;
                l1 = l1->next;
                l2 = l2->next;            
        }
        
        while(l1) {
                int sum = (l1->val + carry)%10;
                carry = (l1->val+carry)/10;
                
                ListNode* node = new ListNode(sum);
                node->next = prev;
                prev = node;   
                l1 = l1->next;
            
        }
        
        while(l2) {
                int sum = (l2->val + carry)%10;
                carry = (l2->val+carry)/10;
                
                ListNode* node = new ListNode(sum);
                node->next = prev;
                prev = node;    
                l2 = l2->next;
            
        }
        
     //   cout<<carry<<endl;
        
        if(carry != 0) {
                ListNode* node = new ListNode(carry);
                node->next = prev;
                prev = node;  
        }
        return prev;
        
        
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        l1 = reverse(l1);
        l2 = reverse(l2);
        head = addList(l1, l2);
        
        return head;
        
        
    }
};
