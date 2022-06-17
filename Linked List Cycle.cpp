/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // ListNode* t=head;
        
//         unordered_map<ListNode*, int> umap;
        
//         while(t && umap.find(t)==umap.end()){
//             umap[t]++;
//             t=t->next;
//         }
//         if(umap.find(t)!=umap.end()){
//             return true;
//         }
//         return false;
        
//         Optimal:
        
        ListNode* slow=head, *fast=head;
        
        if(fast==NULL)
            return false;
        
        if(fast->next==NULL)
            return false;
        
        do{
            slow=slow->next;
            fast=fast->next->next;
            // cout<<slow->val<<" "<<fast->val<<endl;
        }while(fast && fast->next && slow!=fast);
        
        if(fast==NULL)
            return false;
        
        if(fast->next==NULL)
            return false;
        
        if(fast==slow){
            return true;
        }
        
        return false;
    }
};
