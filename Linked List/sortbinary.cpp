/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* head) {
    ListNode *curr=head;
    int zeroes=0;
    int ones=0;
    while(curr!=NULL){
        if(curr->val==0){
            zeroes++;
        }
        else{
            ones++;
        }
        curr=curr->next;
    }
    ListNode *curr2=head;
    while(zeroes--){
        curr2->val=0;
        curr2=curr2->next;
    }
    while(ones--){
        curr2->val=1;
        curr2=curr2->next;
    }
    return head;
}
