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
ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)
            return head;
        
        // Calculating length
        int n=0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            n++;
        }
        
        k = k%n;
        // Reverse the first (n-k) nodes group of the list
        
        temp = head;
        ListNode* prev, *next;
        prev = NULL;
        next = NULL;
        int count =0;
        while(temp && count<(n-k)){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            count++;
        }
        // Reverse the remaining nodes group (k)
        ListNode* pseudohead = prev;
        temp = next;
        prev = NULL;next = NULL;
        count=0;
        while(temp && count<k){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            count++;
        }
        
        //link the first and the second group
        if(head)
        head->next = prev;
        
        //reverse the resultant list as a whole
        temp = pseudohead;
        prev = NULL;
        next = NULL;
        while(temp){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            count++;
        }
        return prev;
    }
};

// Count number of nodes = n;
// set k = k%n;

// Reverse the first half (n-k);
// Reverse the seond half(k);
// link both groups
// Reverse the entire resultant list;
