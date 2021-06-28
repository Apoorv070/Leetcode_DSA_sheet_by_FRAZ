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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode * temp3 = head;
        while(temp1!=NULL&&temp2!=NULL){
            if(temp1->val<=temp2->val){
                temp3->next = temp1;
                temp1 = temp1->next;
                temp3 = temp3->next;
                temp3->next = NULL;
            }else{
                temp3->next = temp2;
                temp2 = temp2->next;
                temp3 = temp3->next;
                temp3->next = NULL;
            }
        }
        
        while(temp1!=NULL){
            temp3->next = temp1;
            break;
        }
        
        while(temp2!=NULL){
            temp3->next = temp2;
            break;
        }
        
        head = head->next;
        return head;
    }
};
