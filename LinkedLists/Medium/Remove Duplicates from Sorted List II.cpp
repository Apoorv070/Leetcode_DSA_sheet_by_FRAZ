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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr or head->next==nullptr)return head;
        
        ListNode * temp = head->next;
        int val = head->val;
        while(temp!=NULL and temp->val==val){
            temp = temp->next;
        }
        if(temp==head->next){
            head->next = deleteDuplicates(temp);
            return head;
        }
        else
        return deleteDuplicates(temp);
    }
};
