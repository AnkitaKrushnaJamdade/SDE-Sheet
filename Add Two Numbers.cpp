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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
//         My solution: In-place:
        
//         if(!l1)
//             return l2;
//         if(!l2)
//             return l1;
        
//         ListNode* nHead=new ListNode;
        
//         ListNode* t = nHead, *prev;
        
//         int add, carry=0, dv;
//         while(l1 || l2){
//             if(l1 && l2){
//                 add = l1->val + l2->val+carry;
//                 dv = add%10;
//                 carry=add/10;
//                 t->next = l1;
//                 t->val = dv;
//                 l1=l1->next;
//                 l2=l2->next;
//             }
//             else if(l1 && (!l2)){
//                 add = l1->val +carry;
//                 dv = add%10;
//                 carry=add/10;
//                 t->next = l1;
//                 t->val = dv;
//                 l1=l1->next;
//             }
//             else{ 
//                 add = l2->val+carry;
//                 dv = add%10;
//                 carry=add/10;
//                 t->next = l2;
//                 t->val = dv;
//                 l2=l2->next;
//             }  
//             prev=t;
//             t=t->next;
//             t->val=-1;
//         }
        
//         if(carry!=0){
//             t->val = carry;
//         }
        
//         if(prev->next->val == -1){
//             prev->next = NULL;
//             delete(prev->next);
//         }
        
//         return nHead;
        
        
        
//         Striver's Solution = extra space:
        
        ListNode* nHead = new ListNode, *t=nHead;
        
        int carry = 0, add;
        
        while(l1 || l2 || carry){
            add = 0;
            if(l1){
                add = l1->val;
                l1 = l1->next;
            }
            if(l2){
                add += l2->val;
                l2 = l2->next;
            }
            
            if(carry){
                add += carry; 
            }
            
            ListNode* n=new ListNode(add%10);
            t->next = n;
            t=t->next;            
            carry=add/10;
        }
        
        return nHead->next;
        
    }
};
