#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    
//     Brute force:
    
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    if(cnt%2==0)
        cnt/=2+1;
    else
        cnt/=2;
    
//     int i=0;
    temp=head;
    while(cnt>=0){
        temp=temp->next;
        cnt--;
    }
    
    return temp;
    
    
//     Efficient Approach:
    
//     Node* slow = head, *fast=head;
    
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
    
//     return slow;
}
