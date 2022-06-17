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
    bool isPalindrome(ListNode* head) {
//         Brute:
        
//         ListNode* t=head;
        
//         vector<int> vec;
        
//         while(t){
//             vec.push_back(t->val);
//             t=t->next;
//         }
        
//         int st=0, end=vec.size()-1;
        
//         while(st<end){
//             if(vec[st]!=vec[end])
//                 return false;
//             st++;
//             end--;
//         }
        
//         return true;
        
        
//         Optimal:
        // First find the middle of LL:
        
        ListNode* slow=head, *fast=head, *curr=head, *prev=NULL, *nex;
        
        if(!slow->next)
            return true;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
//         Now slow is at mid
//         Reverse the list from mid
        curr = slow;
        while(curr){
            nex = curr->next;
            curr->next = prev;
            prev=curr;
            curr=nex;
        }
        
//         Move both the head's temp ptr and prev pointer
        slow = head;
        while(prev && slow){
            if(prev->val!=slow->val)
                return false;
            prev=prev->next;
            slow=slow->next;
        }
        
        return true;
        
    }
};
