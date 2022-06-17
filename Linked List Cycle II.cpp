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
    ListNode *detectCycle(ListNode *head) {
        
        unordered_map<ListNode*, int> umap;
        
        ListNode* t=head;
        
        while(t && umap.find(t)==umap.end()){
            umap[t]++;
            t=t->next;
        }
        
        if(!t)
            return NULL;
        
        return t;
        
//         ListNode* slow=head, *fast=head;
        
        
//         if(!slow)       return NULL;
        
//         if(!slow->next) return NULL;               
        
//         do{
//             fast=fast->next->next;
//             slow=slow->next;
//         }while(fast && fast->next && fast!=slow);        
                
//         if(fast==NULL)
//             return NULL;
        
//         if(fast->next==NULL)
//             return NULL;
        
//         fast = head;
        
//         while(fast!=slow){
//             fast = fast->next;
//             slow=slow->next;
//         }
        
//         return fast;
    }
};
