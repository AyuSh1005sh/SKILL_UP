/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* h1, ListNode* h2) {
    int x=0;
    int y=0;
    int r=0;
    int q=0;
    ListNode *ans=new ListNode(0);
    ListNode *head=ans;
    while(h1!=NULL and h2!=NULL){
       
        x=h1->val;
        y=h2->val;
        q=x+y+r;
        r=q/10;
        q=q%10;
        ans->val=q;
        h1=h1->next;
        h2=h2->next;
        if(h1!=NULL or h2!=NULL){
            ans->next=new ListNode(0);
        ans=ans->next;
        }
        
    }
     while(h1!=NULL ){
      
        x=h1->val;
        
        q=x+r;
        r=q/10;
        q=q%10;
        ans->val=q;
        
        h1=h1->next;
        if(h1!=NULL or h2!=NULL){
            ans->next=new ListNode(0);
        ans=ans->next;
        }
        
    }
    while(h2!=NULL ){
       
        y=h2->val;
       
        q=y+r;
        r=q/10;
        q=q%10;
        ans->val=q;
        
        h2=h2->next;
        if(h1!=NULL or h2!=NULL){
            ans->next=new ListNode(0);
            ans=ans->next;
        }
    }
    if(r!=0){
        ans->next=new ListNode(0);
        ans= ans->next;
        ans->val=r;
    }
    return head;
    
}
