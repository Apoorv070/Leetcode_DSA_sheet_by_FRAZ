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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * temp = head;
        ListNode * prev = nullptr;
        while(temp!=NULL){
            if(temp->val==val){
                if(prev==NULL){
                    head = head->next;
                    temp = head;
                    continue;
                }
                if(temp->next==NULL){
                    prev->next=NULL;
                    temp = temp->next;
                    continue;
                }
                prev->next = temp->next;
                temp = prev->next;
                continue;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};
