/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
//         Brute:
//         Node* t=head;
        
//         unordered_map<Node*, Node*> umap;
        
//         while(t){
//             Node* n = new Node(t->val);
//             umap[t] = n;
//             t = t->next;
//         }
        
//         t = head;
        
//         while(t){
//             if(t->random)
//                 umap[t]->random = umap[t->random];
            
//             umap[t]->next = umap[t->next];
//             t=t->next;
//         }
                
//         return umap[head];
        
        
//         Optimal:
        
        Node* t=head, *temp;
        
//         Create exact copy node in it's next node's position
        while(t){
            Node* n = new Node(t->val);
            temp = t->next;
            t->next = n;
            n->next = temp;
            t = t->next->next;
        }
        
        t = head;
        
//         Point copied node to it's copied random node
        
        while(t){
            if(t->random!=NULL){
                t->next->random = t->random->next;
            }
            t = t->next->next;
        }
        
        
//         Restore both original and copied Lists
        t = head;
        Node* nHead= new Node(0);
        Node* t2 = nHead, *front;
        
        while(t){
            front = t->next->next;
            t2->next = t->next;
            t->next = front;
            t2 = t2->next;
            t = front;            
        }
        
        return nHead->next;
    }
};
