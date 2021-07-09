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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr or head->next==nullptr){
            return head;
        }
        
        ListNode * temp1 = head;
        ListNode * temp2 = head->next;
        ListNode * temp3 = head->next->next;
        
        temp2->next = nullptr;
        temp1->next = nullptr;
        temp2->next = temp1;
        temp1->next = swapPairs(temp3);
        return temp2;
    }
};
