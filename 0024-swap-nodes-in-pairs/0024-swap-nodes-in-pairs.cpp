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
ListNode* helper(ListNode* head){
    if(head==NULL || head->next==NULL) return head;
    ListNode* first=head;
    ListNode* second=first->next;
    ListNode* third=second->next;
    second->next=first;
    first->next=helper(third);
    return second;
}
    ListNode* swapPairs(ListNode* head) {
       
        
    
    return helper(head);



    }
};