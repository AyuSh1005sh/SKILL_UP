/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* head, int k) {
    ListNode *curr=head;
    ListNode *prev=NULL;
    ListNode *next=NULL;
    int count =0;
    
    while(curr and count<k){
        
        next = curr->next;
        
        curr->next=prev;
        prev=curr;
        curr=next;
        count ++;
        
    }
    if(next){
    head->next=reverseList(next,k);}
    return prev;
    
    
    
    

}
