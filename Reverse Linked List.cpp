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
       
    ListNode* reverseList(ListNode* &head) {
//         ListNode* curr=head;
//         ListNode* prev=NULL;
//         ListNode* nex;
        
//         while(curr!=NULL){
//             nex=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nex;
//         }
        
//         return prev;
        
        
//         recursive sol:
        
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* p = reverseList(head->next);
        head->next->next = head;        
        head->next=NULL;
        return p;
    }
};
