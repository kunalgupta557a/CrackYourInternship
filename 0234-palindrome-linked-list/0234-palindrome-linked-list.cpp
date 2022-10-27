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
    ListNode* reverseList(ListNode* head){
        ListNode* pre=NULL;
        ListNode* curr = head;
        ListNode* nextptr=NULL;
        while(curr){
            nextptr=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nextptr;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
      
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverseList(slow->next);
        slow=slow->next;
        
        while(slow){
            if(head->val!=slow->val) return false;
            head=head->next;
            slow=slow->next;
        }
        
        return true;
        
        
        
    }
};







/*
1  2  2  1
iterate
size of linked list 
then use stack


approcah 2
reverse till middle
2 1    2 1
then iterte both

1 2 3 2 1
2 1
3 2 1 


    
    o(n) nlogn
*/
