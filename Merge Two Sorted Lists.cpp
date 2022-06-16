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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
        ListNode* nHead = new ListNode;
        ListNode* temp = nHead;
        
        while(l1 != NULL && l2 !=NULL){
            if(l1->val <=l2->val){
                temp->next = l1;
                l1=l1->next;
            }
            else{
                temp->next = l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        while(l1){
            temp->next=l1;
            l1 = l1->next;
            temp=temp->next;
        }
        
        while(l2){
            temp->next=l2;
            l2 = l2->next;
            temp=temp->next;
        }
        
        return nHead->next;
//         In-place approach:
//         ListNode* i=l1, *j=l2, *prev, *k, *prev2;
//         if(!i)
//             return j;
//         else if(!j)
//             return i;
        
//         while(i){
//             if(i->val > j->val){
//                 swap(i->val, j->val);
//                 int f = j->val;
                
//                 prev = j;
//                 k=j->next;
                
//                 while(k && k->val < f){
//                     prev->val = k->val;
//                     prev = k;
//                     k=k->next;
//                 }
//                 prev->val = f;
//             }
//             prev2=i;
//             i=i->next;
//         }
        
//         prev2->next = l2;
//         return l1;
    }
};
