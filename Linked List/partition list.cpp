/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int B) {
    ListNode *left= NULL;//new ListNode(0);
    ListNode *right= NULL;//new ListNode(0);
    ListNode *temp1= left;
    ListNode *temp2= right;
    ListNode *curr=head;
    bool hs=false,hg=false;
    if(head->next==NULL){
        return head;
    }
    while(curr){
        if(curr->val<B){
            
            
         
            
            if(!hs ){
                temp1=new ListNode(0);
                left=temp1;
                hs=true;
                temp1->val= curr->val;;
                
            }  
            else{
                temp1->next=new ListNode(curr->val);
                temp1=temp1->next; 
            //temp1->val=;  
            
            }      
        }
        else{
            if(!hg ){
                temp2= new ListNode(0);
                right=temp2;
                hg=true;
                temp2->val= curr->val;;
                
            }  
            else{
                temp2->next=new ListNode(curr->val);
           // temp2->val=;  
            temp2=temp2->next; 
            }   
            
        }
       // temp2->next=NULL;
        curr=curr->next;
    }
    if(left==NULL){
        return right;
    }
    else if(right==NULL){
        return left;
    }
    else{
    temp1->next=right;
    return left;
}
}
