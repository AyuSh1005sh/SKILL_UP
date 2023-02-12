/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* h1, ListNode* h2) {
   
    ListNode *head=NULL;
    ListNode *x=NULL;
    ListNode *curr1=h1;
    ListNode *curr2=h2;
    bool flag = true;
    
    while(curr1 and curr2){
        
        if(curr1->val<curr2->val){
            
            if(flag ){
                
                head=new ListNode(curr1->val);
                x=head;
                flag=false;
               curr1=curr1->next;
            }
            
            else{
                head->next=new ListNode(curr1->val);
                head=head->next;
                curr1=curr1->next;
            }
            
        }
        
        else{
             if(flag ){
                head=new ListNode(curr2->val);
                x=head;
                flag=false;
                curr2=curr2->next;
                
            }
            
            else{
                head->next=new ListNode(curr2->val);
            
            head=head->next;
            curr2=curr2->next;
            }
            
            
        }
        
    }
    while(curr1){
          head->next=new ListNode(curr1->val);
            
            head=head->next;
            curr1=curr1->next;
    }
    while(curr2){
           head->next=new ListNode(curr2->val);
            
            head=head->next;
            curr2=curr2->next;
    }
    return x;
}
