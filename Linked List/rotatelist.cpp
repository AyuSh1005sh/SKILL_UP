/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* head, int k) {
    ListNode *curr=head;
    ListNode *tail=head;
    ListNode *temp=NULL;
    ListNode* faltu=head;
    if(!head or head->next==NULL){
        return head;
    }
    int x=0;
    while(faltu){
        faltu=faltu->next;
        x++;
    }
    while(tail->next){
        tail=tail->next;
    }
    tail->next=head;
    int p;
    if(x>=k){
      p=x-k-1;  
    }
    else{
        k=k%x;
        p=x-k-1;
    }
    
    while(p--){
        curr=curr->next;
       // k--;
    }
    temp=curr->next;
    curr->next=NULL;
    return temp;
    
    
}
