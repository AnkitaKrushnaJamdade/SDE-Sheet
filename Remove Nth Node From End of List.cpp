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
    ListNode* removeNthFromEnd(ListNode* &head, int n) {
//         if(!head)
//             return head;
        
//         if(!head->next)
//             return NULL;
        
//         ListNode* t = head, *prev;
//         int cnt=0;
//         while(t){
//             prev=t;
//             t = t->next;
//             cnt++;
//         }
        
//         int NthBack = cnt-n;
        
//         if(NthBack==0){
//             head=head->next;
//             return head;
//         }
        
//         t=head;
        
        
//         while(NthBack--){
//             prev = t;
//             t=t->next;
//         }
//         if(!t){
//             prev->next=NULL;
//         }else{
//             prev->next=t->next;
//         }
//         return head;
        
        // Optimized Approach:
        
        ListNode* t=head, *slow=head, *fast=head, *prev=slow;
        if(t==NULL || t->next==NULL)
            return NULL;
        
        while(n--){
            fast=fast->next;
        }
        
        if(!fast){
            head=head->next;
            return head;
        }
        while(fast!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        
        
        prev->next=prev->next->next;
        
        return head;
        
    }
};
