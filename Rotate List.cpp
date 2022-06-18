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
        if(!head)   return head;
        if(!head->next) return head;
        if(!k)  return head;
        ListNode* t = head;
        int cnt=1;
        while(t->next){
            cnt++;
            t = t->next;
        }
        
        ListNode* st;
        if(cnt==k)
            return head;
        else if(k<cnt){
            cnt = cnt-k;
            ListNode* t2 = head;
            
            while(cnt>1){
                t2 = t2->next;
                cnt--;
            }
            
            st = t2->next;
            t2->next = NULL;
            t->next = head;
        }
        else{
            k = k%cnt;
            if(!k)  return head;
            cnt = cnt-k;
            ListNode* t2 = head;
            
            while(cnt>1){
                cout<<t2->val<<" ";
                t2 = t2->next;
                cnt--;
            }
            st = t2->next;
            t2->next = NULL;
            t->next = head;
        }
        
        return st;
        
    }
};
