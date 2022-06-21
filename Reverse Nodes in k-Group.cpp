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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        
        int cnt=1;
        if(!head)   return head;
        if(!head->next) return head;
        
        while(temp->next){
            cnt++;
            temp = temp->next;
        }
        
        ListNode* t = new ListNode(0);
        t->next = head;
        ListNode* curr, *pre = t, *nex;
        
        while(cnt>=k){
            curr=pre->next;
            nex = curr->next;
            for(int i=1;i<k;i++){
                curr->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            pre = curr;
            cnt-=k;
        }
        
        return t->next;
    }
};
