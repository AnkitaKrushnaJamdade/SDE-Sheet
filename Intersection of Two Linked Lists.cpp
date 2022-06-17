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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
//         Brute:
//         ListNode* t1 = headA, *t2, *t, *prev;
        
//         while(t1){
//             t2 = headB;
            
//             while(t2){
//                 if(t1==t2){
//                     t = t1;
//                     return t1;
//                 }
                
//                 t2=t2->next;
//             }
//             t1 = t1->next;
//         }
        
        
//         return t;
        
        
        
//         Better: hashing
//         ListNode* t1 = headA, *t2 = headB;
        
//         unordered_map<ListNode*,int> umap;
//         while(t1){
//             umap[t1]++;
//             t1=t1->next;
//         }
        
//         while(t2){
//             if(umap.find(t2)!=umap.end())
//                 return t2;
            
//             t2=t2->next;
//         }
        
//         return NULL;
        
        
        
//         Optimal:
        
//         Calculate length of both LL:
        ListNode* t1 = headA, *t2 = headB;
        
        int cnt1=0, cnt2=0;
        
        while(t1 || t2){
            if(t1){
                cnt1++;
                t1=t1->next;
            }
            if(t2){
                cnt2++;
                t2=t2->next;
            }
        }
        
        if(cnt1 > cnt2){
            int diff = cnt1-cnt2;
            t1 = headA;
            while(diff--){
                t1=t1->next;
            }
            
            t2=headB;
            while(t1 && t2){
                if(t1==t2){
                    return t1;
                }
                t1=t1->next;
                t2=t2->next;
            }
        }
        else{
            int diff = cnt2-cnt1;
            t2 = headB;
            while(diff--){
                t2=t2->next;
            }
            
            t1=headA;
            while(t1 && t2){
                if(t1==t2){
                    return t1;
                }
                t1=t1->next;
                t2=t2->next;
            }            
        }
        
        return NULL;
    }
};
